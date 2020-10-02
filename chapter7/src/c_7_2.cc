#include <iostream>
using namespace std;

int main() {
  void Input(float arr[], int &count);
  void Display(float arr[], int count, float &gra);
  void Caculate(float arr[], int count, float &gra);
  int count;
  float arr[10], gra;
  Input(arr, count);
  Caculate(arr, count, gra);
  Display(arr, count, gra);
  return 0;
}

void Input(float arr[], int &count) {
  cout << "Please enter the grades of gulf(0 to quit): " << endl;
  for (count = 0; count < 10; ++count) {
    cout << "Gulf #" << count + 1 << ": ";
    (cin >> arr[count]).get();
    if (arr[count] == 0)
      break;
  }
  cout << "End of input!" << endl;
}

void Display(float arr[], int count, float &gra) {
  cout << "The grades of gulf is: ";
  for (int num = 0; num < count; ++num)
    cout << arr[num] << "   ";
  cout << endl;
  cout << "The average of grades is: " << gra << endl;
}

void Caculate(float arr[], int count, float &gra) {
  gra = 0;
  for (int num = 0; num < count; ++num)
    gra += arr[num];
  gra /= count;
}
