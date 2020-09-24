#include <iostream>
#include <string>
using namespace std;

int main() {
  char choice;
  cout << "Please enter one of the following choices:" << endl;
  cout << "c) carnivore          p) pianist" << endl;
  cout << "t) tree                g) game" << endl;
  while (cin >> choice) {
    cin.get();
    switch (choice) {
    case 'c':
      cout << "A maple is a carnivore." << endl;
      break;
    case 'p':
      cout << "A maple is a pianist." << endl;
      break;
    case 't':
      cout << "A maple is a tree." << endl;
      break;
    case 'g':
      cout << "A maple is a game." << endl;
      break;
    default:
      cout << "Please enter a c, p, t, or g: ";
      continue;
    }
    break;
  }
  return 0;
}
