#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class AlienAndPassword {
  public:
    int getNumber(string S);
};

int AlienAndPassword::getNumber(string S)
{
  int cnt = 0;
  char prev = S[0];

  for (int i = 0; i < S.size(); i++) {
    if (S[i] != prev) {
      cnt += 1;
      prev = S[i];
    }
  }

  return cnt + 1;
}
