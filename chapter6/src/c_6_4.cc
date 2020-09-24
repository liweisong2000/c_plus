#include <iostream>
using namespace std;

int main() {
  const int strsize = 50;
  struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
  };
  bop BOP[5] = {{"Wimp Macho", "Senior Programmer", "C++", 0},
                {"Raki Rhodes", "Junior Programmer", "Python", 1},
                {"Celia Laiter", "Intermediate Programmer", "MIPS", 2},
                {"Hoppy Hipman", "Analyst Trainee", "Java", 1},
                {"Pat Hand", "Computer Trainee", "LOOPY", 2}};
  cout << "Benevolent Order of Programmers Report" << endl
       << "a. display by name     b. display by title" << endl
       << "c. display by bopname  d. display by preference" << endl
       << "q. quit" << endl;

  int i;
  char choice;
  cout << "Enter your choice: ";
  do {
    (cin >> choice).get();
    switch (choice) {
    case 'a':
      for (i = 0; i < 5; ++i)
        cout << BOP[i].fullname << endl;
      break;
    case 'b':
      for (i = 0; i < 5; ++i)
        cout << BOP[i].title << endl;
      break;
    case 'c':
      for (i = 0; i < 5; ++i)
        cout << BOP[i].bopname << endl;
      break;
    case 'd':
      for (i = 0; i < 5; ++i)
        switch (BOP[i].preference) {
        case 0:
          cout << BOP[i].fullname << endl;
          break;
        case 1:
          cout << BOP[i].title << endl;
          break;
        case 2:
          cout << BOP[i].bopname << endl;
          break;
        };
    };

    if (choice == 'q')
      break;
    cout << "Next choice: ";
  } while (1);

  cout << "Bye!" << endl;
  return 0;
}
