#include <iostream>

void addTwo() {
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
            << std::endl;
}

void productTow() {
  std::cout << "Enter two numbers: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The product of ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 * v2 << std::endl;
}

void hello() { std::cout << "Hello World" << std::endl; }

void refactor_addTwo() {}

int main() {
  hello();
  addTwo();
  productTow();
  return 0;
}
