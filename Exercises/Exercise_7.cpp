#include "bitset"
#include "iostream"
#include "string"
#include <cstdlib>
#include <string>
// Code that convert between decimal & binary
int main() {
  std::string val;
  int operation{0};
  std::cout << "1 for D to B \n2 for B to D" << std::endl;
  std::cin >> operation;

  std::cout << "entert the value" << std::endl;
  std::cin >> val;

  if (operation == 1) {
    int var = std::stoi(val);
    std::string binary = std::bitset<16>(var).to_string();
    std::cout << "binary = " << binary << std::endl;

  } else if (operation == 2) {
    int var = std::stoi(val, 0, 2);
    std::cout << "Decimal = " << var << std::endl;
  }
}

// Another Solution (C -Style)
// int main() {
//   int num = 300;
//   int bin{0};
//   int i = 0;

//   while (num) {
//     bin += ((num & 1) * pow(10, i));
//     i++;
//     num >>= 1;
//   }

//   std::cout << bin << std::endl;
// }
