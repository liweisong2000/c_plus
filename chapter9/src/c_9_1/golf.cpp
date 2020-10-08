#include "golf.h"
#include <cstring>
#include <iostream>
using namespace std;

void setgolf(golf &g, const char *name, int hc) {
  unsigned int i;
  for (i = 0; i <= strlen(name); ++i)
    g.fullname[i] = name[i];
  g.handicap = hc;
}

int setgolf(golf &g) {
  cout << "Please enter the name you want to enter: ";
  cin.getline(g.fullname, 40);
  if (strlen(g.fullname) == 0)
    return 0;
  else {
    cout << "Please enter the handicap you set:  ";
    (cin >> g.handicap).get();
    return 1;
  }
}

void handicap(golf &g, int hc) { g.handicap = hc; }

void showgolf(const golf &g) {
  cout << "The data of golf is: " << endl
       << "Name: " << g.fullname << endl
       << "Handicap: " << g.handicap << endl;
}
