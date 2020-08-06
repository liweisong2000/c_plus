#include <cstring>
#include <iostream>
#include <string>
using namespace std;

template <typename T> T maxn(T *arr, T num) {
  T max;
  max = arr[0];
  for (int i = 1; i < num; ++i)
    max = arr[i] > max ? arr[i] : max;
  return max;
}

char *maxn(const char *arr[], int num) {
  static char cha[10];
  for (int i = 0; i < num; ++i, ++arr) {
    if (strlen(cha) == strlen(*arr))
      continue;
    else if (strlen(cha) < strlen(*arr))
      strcpy(cha, *arr);
  }
  return cha;
}

int main() {
  int int_arr[6] = {2, 12, 6, 8, 10, 4};
  cout << "The biggest number is: " << maxn(int_arr, 6) << endl;

  double dou_arr[4] = {1.2, 4.5, 2.3, 3.4};
  cout << "The biggest number is: " << maxn<double>(dou_arr, 4) << endl;

  char *maxn(const char *arr[], int num);
  const char *poi_arr[] = {"Hello!", "What's", "your", "name?", "kid"};
  cout << "The longest array is: " << maxn(poi_arr, 5) << endl;
  return 0;
}
