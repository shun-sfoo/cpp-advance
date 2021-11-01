#include <cctype>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void count_punct() {
  string s("Hello, World!!!");
  decltype(s.size()) punct_cnt = 0;
  for (auto c : s) {
    if (ispunct(c)) {
      ++punct_cnt;
    }
  }

  cout << punct_cnt << endl;
}

void make_upper() {
  string s("Hello, World!!!");
  for (auto &c : s) {
    c = toupper(c);
  }

  cout << s << endl;
}

void make_partial_upper() {
  string s("some string");
  for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]);
       ++index) {
    s[index] = toupper(s[index]);
  }

  cout << s << endl;
}

void convert_X() {
  string s(10, 'x');
  for (char &c : s) {
    c = 'X';
  }
  cout << s << endl;
}

int main() {
  count_punct();
  make_upper();
  make_partial_upper();
  convert_X();
}
