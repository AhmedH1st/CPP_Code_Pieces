#include "iostream"

// Code that prints the ASCII table
int main() {

  std::cout << "ASCII Code Table:" << std::endl
            << "+------+------+" << std::endl;

  std::cout << "| Char | ASCII |" << std::endl
            << "+------+------+" << std::endl;

  for (int i = 0; i < 256; i++) {
    std::cout << "|   " << static_cast<char>(i) << "|   " << static_cast<int>(i)
              << std::endl;
  }
}
