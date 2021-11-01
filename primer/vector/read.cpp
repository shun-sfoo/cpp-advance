#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void read_line() {
  string line;
  while (getline(cin, line)) {
    cout << line << endl;
  }
}

void read_word() {
  string word;
  cin >> word;
  cout << word << endl;
}

void word_concat() {
  string result;
  string word;
  while (cin >> word) {
    result += word + " ";
  }

  cout << result << endl;
}


int main() {
  // read_line();
  // read_word();
  word_concat();

  return 0;
}
