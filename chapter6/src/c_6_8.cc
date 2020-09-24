#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string filename;
  ifstream inFile;
  cout << "Please enter name of data file: ";
  getline(cin, filename);
  inFile.open(filename);

  if (!inFile.is_open()) {
    cout << "Could not open the file!" << filename << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }

  int i = 0;
  char ch;
  do {
    inFile >> ch;
    if (inFile.good())
      ++i;
    else if (inFile.eof()) {
      cout << "End of file reached." << endl;
      break;
    }
  } while (1);

  if (i == 0)
    cout << "No data processed." << endl;
  else
    cout << "Char in sum: " << i << endl;

  inFile.close();
  if (!inFile.is_open())
    cout << "End." << endl;
  return 0;
}
