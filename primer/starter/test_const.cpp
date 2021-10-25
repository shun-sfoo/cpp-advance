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

int main() {

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

  is_allow();
}
