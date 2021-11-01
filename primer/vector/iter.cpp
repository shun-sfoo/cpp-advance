#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void upper_first_letter() {
  std::string s("some string");
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *it = toupper(*it);
    std::cout << s << std::endl;
  }
}

void upper_all() {
  string s("some string");
  for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
    *it = toupper(*it);
  }
  cout << s << endl;
}

void iter_add_nearly() {
  vector<int> list;
  int e;
  while (cin >> e) {
    list.push_back(e);
  }

  for (auto it = list.cbegin(); it != list.cend() - 1; ++it) {
    int r = *it + *(it + 1);
    cout << r << " ";
  }
  cout << endl;
}

void iter_add_head_tail() {
  vector<int> list;
  int e;
  while (cin >> e) {
    list.push_back(e);
  }

  for (auto it = list.cbegin(); it != list.cbegin() + list.size() / 2; ++it) {
    int r = *it + *(it + (list.cend() - 1 - it));
    cout << r << " ";
  }
  cout << endl;
}

void count_grade() {
  vector<int> list(11, 0);
  int e;
  while (cin >> e) {
    auto beg = list.begin();
    ++*(beg + e / 10);
  }

  for (auto it = list.cbegin(); it != list.cend(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}

int main() {
  upper_first_letter();
  upper_all();
  // iter_add_nearly();
  // iter_add_head_tail();
  count_grade();
  return 0;
}
