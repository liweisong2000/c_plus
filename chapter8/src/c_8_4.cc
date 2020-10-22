#include <cstring>
#include <iostream>
using namespace std;

struct stringy {
  char *str;
  int ct;
};

void set(stringy &beany, char *testing) {
  beany.str = new char[34];
  beany.str = testing;
  beany.ct = strlen(testing);
}

void show(const stringy &beany, int time) {
  for (int i = 0; i < time; ++i)
    cout << "#" << i + 1 << ": " << beany.str << endl;
  cout << endl;
}

void show(const char *testing, int time) {
  for (int i = 0; i < time; ++i)
    cout << "#" << i + 1 << ": " << testing << endl;
  cout << endl;
}

int main() {
  void set(stringy & beany, char *testing);
  void show(const stringy &beany, int time = 1);
  void show(const char *testing, int time = 1);
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";
  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!");
  return 0;
}
