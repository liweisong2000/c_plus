#include <cstring>
#include <iostream>
#include <string>

void strcount(char *str) {
  using namespace std;
  static int total = 0;
  int count = 0;
  cout << "\"" << str << "\" contains ";
  while (*str++) {
    if (*str == '\40')
      continue;
    count++;
  }
  total += count;
  cout << count << " characters\n";
  cout << total << " characters\n";
}

int main() {
  void strcount(char *str);
  using namespace std;
  int i;
  char str[30];
  string input;

  cout << "Enter a line:\n";
  while (getline(cin, input, '\n') && (input != "")) {
    while (cin.get() != '\n')
      ;
    for (i = 30; i >= 0; --i)
      str[i] = '\0';
    for (i = 0; input[i] != '\0'; ++i)
      str[i] = input[i];
    strcount(str);
    cout << "Enter next line (empty line to quit):\n";
  }
  cout << "Bye\n";
  return 0;
}
