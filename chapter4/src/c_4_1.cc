#include <iostream>
using namespace std;

int main() {
  const int length = 20;
  char first[length];
  char last[length];
  cout << "What is your first name? ";
  cin.getline(first, length);
  cout << "What is your last name? ";
  cin.getline(last, length);

  int age;
  char grade;
  cout << "What letter grade do you deserve? ";
  (cin >> grade).get();
  cout << "What is your age? ";
  (cin >> age).get();
  cout << "Name: " << last << ", " << first << endl
       << "Grade: " << ++grade << endl
       << "Age: " << age << endl;
  return 0;
}
