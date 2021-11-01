#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void push_back_int() {
  vector<int> v;
  int e;
  while (cin >> e) {
    v.push_back(e);
  }

  for (auto t : v) {
    cout << t << endl;
  }
}

void push_back_str() {
  vector<string> v;
  string e;
  while (cin >> e) {
    v.push_back(e);
  }

  for (auto t : v) {
    cout << t << endl;
  }
}

void count_scores() {
  vector<unsigned> scores(11, 0);
  unsigned grade;
  while (cin >> grade) {
    if (grade <= 100) {
      ++scores[grade / 10];
    }
  }
  for (auto i : scores) {
    cout << i;
    cout << " ";
  }
  cout << endl;
}

void add_nearly() {
  vector<int> numbers;
  int num;
  while (cin >> num) {
    numbers.push_back(num);
  }

  for (decltype(numbers.size()) i = 0; i < numbers.size(); i += 2) {
    int r;
    if (i == numbers.size() - 1) {
      r = numbers[i];
    } else {
      r = numbers[i] + numbers[i + 1];
    }

    cout << r;
    cout << " ";
  }
  cout << endl;
}

int main() {
  // push_back_int();
  // push_back_str();
  // count_scores();
  add_nearly();
  return 0;
}
