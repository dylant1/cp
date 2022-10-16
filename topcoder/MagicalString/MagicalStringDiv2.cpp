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

class MagicalStringDiv2 {
  public:
    int replacements(string s);
};

int MagicalStringDiv2::replacements(string s)
{
  int mid = (s.size() / 2);
  int res = 0;

for (int i = 0; i < s.size(); i++) {
  if (i < mid && s[i] != '>') {
      res += 1;
    }
  else if (i >= mid && s[i] != '<') {
      res += 1;
    }
  }

  return res;
}
