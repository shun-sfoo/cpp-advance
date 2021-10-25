#include <iostream>

int main() {
  double dval = 32.4;
  const int &idval = dval;
  std::cout << "dval is " << idval << std::endl;

  int i = 3;
  int *pi = &i;
  *pi = *pi * *pi;
  std::cout << "i is " << i << std::endl;

  int val = 0, sum = 0;
  while (std::cin >> val) {
    sum += val;
  }

  std::cout << "sum is " << sum << std::endl;
}
