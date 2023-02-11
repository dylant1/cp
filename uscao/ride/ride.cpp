/*
ID: dylan.t2
TASK: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ofstream fout ("ride.out");
  ifstream fin ("ride.in");

  string comet;
  string group;

  
  if (fin.is_open() == true) {
    fin >> comet;
    fin >> group;

    int cometValue = 1;
    int groupValue = 1;

    for (int i = 0; i < comet.length(); i++) {
      cometValue *= comet[i] - 'A' + 1;
    }

    for (int i = 0; i < group.length(); i++) {
      groupValue *= group[i] - 'A' + 1;
    }

    if (cometValue % 47 == groupValue % 47) {
      fout << "GO" << endl;
    } else {
      fout << "STAY" << endl;
    }

    fin.close();
  }

  return 0;
}
