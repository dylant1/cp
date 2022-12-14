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

class Cryptography {
  public:
    long long encrypt(vector <int> numbers);
};

long long Cryptography::encrypt(vector<int> numbers) {
  // sort the vector
  sort(numbers.begin(), numbers.end());
  long long res = 1;
  numbers[0]++;
  
  for (int i = 0; i < numbers.size(); i++) {
    res *= numbers[i];
  }
  
    
  return res;
}
