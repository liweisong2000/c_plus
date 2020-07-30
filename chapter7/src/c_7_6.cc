#include <iostream>
using namespace std;

int main() {
  int Fill_array(double arr[], int max);
  void Show_array(double arr[], int size);
  void Reverse_array(double arr[], int size, int m);

  int max, size;
  cout << "Please enter the length of array: ";
  (cin >> max).get();
  double arr[max];

  size = Fill_array(arr, max);
  cout << "Already enter " << size << " numbers." << endl;

  Show_array(arr, size);

  cout << "Reverse array: " << endl;
  Reverse_array(arr, size, 0);
  Show_array(arr, size);

  cout << "Reverse array" << endl
       << "(except the first and the last one): " << endl;
  Reverse_array(arr, size, 1);
  Show_array(arr, size);

  if (size == 0)
    cout << "none";
  cout << endl;
  return 0;
}

int Fill_array(double arr[], int max) {
  int m = 0;
  while (m < max) {
    cout << "Please enter the number: ";
    (cin >> arr[m]).get();
    if (!cin) {
      cout << "Wrong input!" << endl;
      break;
    } else
      ++m;
  }
  if (m == max)
    cout << "Already full!" << endl;
  return m;
}

void Show_array(double arr[], int size) {
  int m;
  cout << "The numbers in array: ";
  for (m = 0; m < size; ++m)
    cout << arr[m] << "  ";
  cout << endl;
  if (m == 0)
    cout << "none!";
}

void Reverse_array(double arr[], int size, int m) {
  double temp;
  size -= (m + 1); //对应数组下标的最大值
  while (m < size) {
    temp = arr[m];
    arr[m] = arr[size];
    arr[size] = temp;
    ++m;
    --size;
  }
}
