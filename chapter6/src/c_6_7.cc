#include <cctype>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
  char words[20];
  const char *com = "q";
  int other = 0, word = 0, vowel = 0, consonant = 0, compare = 1;

  cout << "Enter words (q to quit): " << endl;
  do {
    (cin >> words).get();
    compare = strcmp(words, com);
    if (compare == 0)
      break;
    else if (!(isalpha(words[0])))
      ++other;
    else
      switch (tolower(words[0])) {
      case 'a':
        ++vowel;
        break;
      case 'e':
        ++vowel;
        break;
      case 'i':
        ++vowel;
        break;
      case 'o':
        ++vowel;
        break;
      case 'u':
        ++vowel;
        break;
      }
    ++word;
  } while (1);

  consonant = word - vowel - other;
  cout << vowel << " words beginning with vowels " << endl;
  cout << consonant << " words beginning with consonants " << endl;
  cout << other << " others " << endl;
  return 0;
}
