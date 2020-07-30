#include <cstring>
#include <iostream>
#include <string>
using namespace std;
const int SLEN = 30;

struct student {
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

int main() {
  int getinfo(student pa[], int n);
  void display1(student st);
  void display2(const student *ps);
  void display3(const student pa[], int n);
  int class_size;
  cout << "Enter class size: ";
  cin >> class_size;
  while (cin.get() != '\n')
    continue;

  student *ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for (int i = 0; i < entered; ++i) {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete[] ptr_stu;
  cout << "Done\n";
  return 0;
}

int getinfo(student pa[], int n) {
  int i;
  string ch;
  cout << "Please enter the element: " << endl;
  for (i = 0; i < n; ++i) {
    cout << "Student #" << i + 1 << " :" << endl;
    cout << "Fullname: ";
    cin.get(pa[i].fullname, SLEN);
    cin.get();
    if (pa[i].fullname[0] == '\0')
      break;
    cout << "Hobby: ";
    cin.get(pa[i].hobby, SLEN);
    cin.get();
    cout << "Ooplevel: ";
    (cin >> pa[i].ooplevel).get();
    cout << endl;
  }
  cout << "Enter end!" << endl << endl;
  return i;
}

void display1(student st) {
  cout << "Fullname: " << st.fullname << endl
       << "Hobby: " << st.hobby << endl
       << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student *ps) {
  cout << "Fullname: " << ps->fullname << endl
       << "Hobby: " << ps->hobby << endl
       << "Ooplevel: " << ps->ooplevel << endl
       << endl;
}

void display3(const student pa[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "Student #" << i + 1 << " :" << endl
         << "Fullname: " << pa[i].fullname << endl
         << "Hobby: " << pa[i].hobby << endl
         << "Ooplevel: " << pa[i].ooplevel << endl;
  }
}
