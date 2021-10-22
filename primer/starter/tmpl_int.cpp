#include <iostream>

int main() {
  int currentVal = 0, val = 0;
  // 读取第一个数，确保有数据可以处理
  if (std::cin >> currentVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currentVal) {
        ++cnt;
      } else {
        std::cout << currentVal << " occurs " << cnt << " times " << std::endl;
        currentVal = val;
        cnt = 1;
      }
    }

    // 打印最后一个数的个数
    std::cout << currentVal << " occurs " << cnt << " times " << std::endl;
  }
}
