#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int i;
  int compare = 1;
  char words[20];
  const char *word = "done";
  cout << "Enter words (to stop, type the word done):" << endl;
  for (i = 0; compare != 0; ++i) {
    (cin >> words).get();
    compare = strcmp(words, word);
  }
  i -= 1;
  cout << "You entered a total of " << i << " words." << endl;
  return 0;
}
