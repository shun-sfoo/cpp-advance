#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold{0};
  double revenue{0.0};
};

int main() {

  std::string s;
  getline(std::cin, s);

  return 0;
}
