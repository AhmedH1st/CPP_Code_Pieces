#include "iostream"

// Code that print the Right Angle Pattern

int main() {
  int row{0};
  int space{0};

  std::cout << "Enter number of rows :" << std::endl;
  std::cin >> row;

  for (int i = 0; i < row; i++) {
    std::cout << '*';
    for (int j = 0; j < space && !(row - i == 1); j++) {
      std::cout << ' ';
    }
    space++;

    if (i != 0)
      std::cout << '*';

    if (row - i == 1) {
      for (int j = 0; j < row - 1; j++) {
        std::cout << '*';
      }
    }

    std::cout << std::endl;
  }
}

/*
Pattern Drawn

*
* *
*  *
*   *
*    *
*     *
*      *
*       *
*        *
*         *
*          *
*           *
*            *
*             *
****************

*/