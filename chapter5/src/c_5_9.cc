#include <iostream>
#include <string>
using namespace std;

int main() {
  int i;
  string words;
  const string word = "done";
  cout << "Enter words (to stop, type the word done):" << endl;
  for (i = 0; words != word; ++i)
    (cin >> words).get();
  cout << "You entered a total of " << i - 1 << " words." << endl;
  return 0;
}
