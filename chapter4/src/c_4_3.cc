#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char first[15];
  char last[30];
  cout << "Enter your first name: ";
  (cin >> first).get();
  cout << "Enter your last name: ";
  (cin >> last).get();
  strcat(last, ", ");
  strcat(last, first);
  cout << "Here's the information in a single string: " << last << "." << endl;
  return 0;
}
