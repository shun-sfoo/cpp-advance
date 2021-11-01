#include <iostream>

void is_allow() {
  const int v2 = 0; // 顶层
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2, *const p3 = &v2, &r2 = v2;
  //         底              底/顶      底
  r1 = r2;
  // p1 = p2;
  p2 = p1;
  // p1 = p3;
  p2 = p3;
}

void test_alias() {
  typedef char *pstring;
  // using pstring = char *;

  char c = 'c';
  const pstring ctr = &c;
  c = 'd';

  const char *cstr1 = &c;
  c = 'e';
  char f = 'f';
  cstr1 = &f;
}

void test_auto() {
  int i = 0, &r = i;
  auto a = r; // a是一个整数
  const int ci = i, &cr = ci;
  auto b = ci; // b是一个整数(ci顶层const特性被忽略)
  auto c = cr; // c是一个整数(cr是ci的别名,ci本身是一个顶层const)
  auto d = &i; // d是一个整型指针(整数的地址就是指向整数的地址)
  auto e = &ci; // e 是一个指向整数常量的指针 (对常量对象取地址是一种底层const)
  const auto f = ci;
  auto &g = ci; // g是一个整型常量引用，绑定到ci
  // auto &h = 42;  不能为非常量引用绑定字面值
  const auto &j = 42; // 可以为常量引用绑定字面值

  std::cout << "a is " << a;              // 0
  std::cout << "b is " << b;              // 0
  std::cout << "c is " << c;              // aaaa
  std::cout << "d is " << d;              // bbbb
  std::cout << "e is " << e;              // cccc
  std::cout << "g is " << g << std::endl; //

  a = 42;
  b = 42;
  c = 42;
  /* d = 42;
  e = 42;
  g = 42; */

  std::cout << "a is " << a;
  std::cout << "b is " << b;
  std::cout << "c is " << c;
  std::cout << "d is " << d;
  std::cout << "e is " << e;
  std::cout << "g is " << g << std::endl;
}

void test_auto2() {
  const int i = 42;
  auto j = i;
  const auto &k = i;
  auto *p = &i;
  const auto j2 = i, &k2 = i;
}

void test_const() {
  int i = 0;
  int *const p1 = &i;  // 不能改变p1的值，这是一个顶层const
  const int ci = 42;   // 不能改变c1的值，这是一个顶层const
  const int *p2 = &ci; // 允许改变p2的值，这是一个底层const
  const int *const p3 = p2; // 靠右边的是一个顶层const, 靠左边的是一个底层const
  const int &r = ci; // 用于声明引用的const 都是底层const
  i = ci;
  p2 = p3;

  // int *p = p3;  错误，p3有顶层const p2没有
  p2 = p3;
  p2 = &i;
  // int &r = ci;
  const int &r2 = i;
}

int main() {

  test_const();
  is_allow();
  test_auto();
}
