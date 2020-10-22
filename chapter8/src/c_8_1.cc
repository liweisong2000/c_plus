#include <iostream>
#include <string>
using namespace std;

void Print(string &ch, int i) {
  static int count =0;
  ++count;
  if (i) {
    for (int j = 0; j < count; ++j)
      cout << ch << endl;
  }
}

int main() {
  void Print(string & ch, int i);
  char choice;
  string ch = "Hello World!";
  cout << "Display or quit('d' to display,'q' to quit): ";
  while ((cin >> choice) && (choice == 'd')) {
    cin.get();
    Print(ch, 1);
    cout << "Next operate: ";
  }
  return 0;
}
