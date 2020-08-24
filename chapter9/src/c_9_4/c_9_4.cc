#include "sales.h"
#include <iostream>
int main() {
  using namespace SALES;
  const int n = 4;
  double ar[n] = {1.1, 2.2, 3.3, 5.5};
  struct Sales sale1;
  setSales(sale1, ar, n);
  showSales(sale1);

  struct Sales sale2;
  setSales(sale2);
  showSales(sale2);
  return 0;
}
