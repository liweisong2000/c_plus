#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  char ch;
  do {
    cin.get(ch);
    cin.get();
    if (isalpha(ch)) {
      if (isupper(ch)) {
        ch = tolower(ch);
        cout << ch << endl;
      } else {
        ch = toupper(ch);
        cout << ch << endl;
      }
    } else if (isspace(ch))
      cout << ch << endl;
    else if (isdigit(ch))
      continue;
    else if (ch == '@')
      break;
    else
      cout << ch << endl;
  } while (1);
  return 0;
}
