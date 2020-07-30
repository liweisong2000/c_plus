#include <cstring>
#include <iostream>
using namespace std;

struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

int main() {
  void Display(box cube);
  void Caculate_Volume(box * cube);
  char ope;
  struct box cube;
  cout << "Please enter oeprate" << endl
       << "('q' to quit or 'c' to continue): ";
  while ((cin >> ope) && (ope == 'c')) {
    cin.get();
    cout << "Please enter the data of box: " << endl << "maker:";
    cin.get(cube.maker, 40);
    cout << "height: ";
    (cin >> cube.height).get();
    cout << "width: ";
    (cin >> cube.width).get();
    cout << "length: ";
    (cin >> cube.length).get();
    Caculate_Volume(&cube);
    Display(cube);
    cout << endl << "Next operate: ";
  }
  if (ope == 'q')
    cout << "Bye!" << endl;
  return 0;
}

void Display(box cube) {
  cout << "The maker is: " << cube.maker << endl
       << "The height is: " << cube.height << endl
       << "The width is: " << cube.width << endl
       << "The length is: " << cube.length << endl
       << "The volume is: " << cube.volume << endl;
}

void Caculate_Volume(box *cube) {
  cube->volume = cube->height * cube->width * cube->length;
}
