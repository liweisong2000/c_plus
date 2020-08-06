#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

void tranverse(string &ch) {
  char cha;
  for (int i = 0; ch[i] != '\0'; ++i) {
    cha = ch[i];
    cha = toupper(cha);
    cout << cha;
  }
  cout << endl;
}

int main() {
  void tranverse(string & ch);
  string ch;
  cout << "Enter a string (q to quit): ";
  while ((getline(cin, ch)) && ch != "q") {
    tranverse(ch);
    cout << "Next string:";
  }
  cout << "Bye." << endl;
  return 0;
}
