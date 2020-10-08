#include <iostream>
#include <cstring>
#include <new>
using namespace std;

int main() {
  int i;
  struct chaff {
    char dross[20];
    int slag;
  };
  char buffer[50];

  chaff *ch1 = new chaff[2];
  strcpy(ch1[0].dross, "flash");
  strcpy(ch1[1].dross, "come");
  for (i = 0; i < 2; ++i)
    ch1[i].slag = 2 * i;

  cout << "Contents of ch1: " << endl;
  for (i = 0; i < 2; ++i) {
    cout << "#" << i + 1 << endl
         << "dross: " << ch1[i].dross << endl
         << "slag: " << ch1[i].slag << endl;
  }
  cout << endl;

  chaff *ch2 = new (buffer) chaff[2];
  strcpy(ch2[0].dross, "flash");
  strcpy(ch2[1].dross, "come");
  for (i = 0; i < 2; ++i)
    ch2[i].slag = 2 * i;

  cout << "Contents of ch2: " << endl;
  for (i = 0; i < 2; ++i) {
    cout << "#" << i + 1 << endl
         << "dross: " << ch2[i].dross << endl
         << "slag: " << ch2[i].slag << endl;
  }
  delete[] ch1;
  return 0;
}
