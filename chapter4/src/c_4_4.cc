#include <iostream>
#include <string>
using namespace std;

int main() {
  string first;
  string last;
  cout << "Enter your first name: ";
  (cin >> first).get();
  cout << "Enter your last name: ";
  (cin >> last).get();
  last = last + ", " + first;
  cout << "Here's the information in a single string: " << last << "." << endl;
  return 0;
}
