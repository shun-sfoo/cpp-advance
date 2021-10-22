#include <iostream>

void sum10() {
  int sum = 0, val = 1;
  while (val <= 10) {
    sum += val;
    ++val;
  }

  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}

void sum100() {
  int sum = 0, val = 50;
  while (val <= 100) {
    sum += val;
    ++val;
  }
  std::cout << "sum of 50 to 100 inclusive is " << sum << std::endl;
}

void minus() {
  int val = 10;
  while (val > 0) {
    std::cout << val << std::endl;
    --val;
  }
}

void minusTwo() {
  int v1 = 0, v2 = 0;
  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> v1 >> v2;
  while (v1 <= v2) {
    std::cout << v1 << std::endl;
    ++v1;
  }
}

int main() {
  sum10();
  sum100();
  minus();
  minusTwo();
  return 0;
}
