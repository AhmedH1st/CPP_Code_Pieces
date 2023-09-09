#include "algorithm"
#include "iostream"
#include <algorithm>

// Code that find the maximum value between 3 values

int main() {
  int a{40}, b{220}, c{30};
  int res = std::max(a, std::max(b, c));
  std::cout << res;
}

// Another Solution
// int main() {
//   int a{40}, b{220}, c{30};
//   int res = a > b ? a > c ? a : c : b > c ? b : c;

//   std::cout << res;
// }
