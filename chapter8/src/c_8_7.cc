#include <iostream>
using namespace std;

template <typename T> T SumArray(T arr[], int n) {
  T sum = 0;
  do {
    --n;
    sum += arr[n];
  } while (n > 0);
  return sum;
}

template <typename T> T SumArray(T *arr[], int n) {
  T sum = 0;
  do {
    --n;
    sum += *arr[n];
  } while (n > 0);
  return sum;
}

struct debts {
  char name[50];
  double amount;
};

int main() {
  int things[6] = {13, 31, 103, 301, 310, 130};
  cout << "The Sum of things:\n" << SumArray(things, 6) << endl << endl;

  double *pd[3];
  struct debts mr_E[3] = {
      {"Ima Wolfe", 2400.0}, {"Ura Foxe", 1300.0}, {"Iby Stout", 1800.0}};
  for (int i = 0; i < 3; i++)
    pd[i] = &mr_E[i].amount;
  cout << "The Sum of debts:\n" << SumArray<double>(pd, 3) << endl;
  return 0;
}

