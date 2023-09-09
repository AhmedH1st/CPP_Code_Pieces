#include "iostream"

// Code that sum the digits of integer entered by user

int main() {
  int num{0};
  int sum{0};
  std::cin >> num;
  while (num) {
    sum += num % 10;
    num /= 10;
  }

  std::cout << sum << std::endl;
}
