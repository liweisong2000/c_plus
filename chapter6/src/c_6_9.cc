#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream inFile;
  inFile.open("src/donate.txt");
  if (!inFile.is_open()) {
    cout << "Could not open the file!" << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }

  int num;
  cout << "The number of each patron: ";
  (inFile >> num).get();
  cout << num << endl;
  struct data {
    string name;
    double fund;
  };
  data *mes = new data[num];

  int i;
  for (i = 0; i < num; ++i) {
    getline(inFile, mes[i].name);
    (inFile >> mes[i].fund).get();
    if (inFile.eof())
      break;
  }

  int p;
  cout << "Grand Patrons:" << endl;
  for (i = 0, p = 0; i < num; ++i) {
    if (mes[i].fund > 10000) {
      cout << "Name:" << mes[i].name << "  Fund:" << mes[i].fund << endl;
      ++p;
    }
  }
  if (p == 0)
    cout << "none" << endl;

  cout << "Patrons:" << endl;
  for (i = 0, p = 0; i < num; ++i) {
    if (mes[i].fund <= 10000 && mes[i].fund > 0) {
      cout << "Name:" << mes[i].name << "   Fund:" << mes[i].fund << endl;
      ++p;
    }
  }
  if (p == 0)
    cout << "none" << endl;

  inFile.close();
  if (!inFile.is_open())
    cout << "End" << endl;
  delete[] mes;
  return 0;
}
