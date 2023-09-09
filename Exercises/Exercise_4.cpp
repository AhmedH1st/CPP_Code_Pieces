#include "iostream"
#include <variant>

// Code that find if char is vowelor not
using std::cin;
using std::cout;
using std::endl;
int main() {

  std::string vowel_letters{"aiouy"};
  char ch;
  cin >> ch;

  if (vowel_letters.find(ch) != std::string::npos) {
    cout << "found" << endl;
  }
}
