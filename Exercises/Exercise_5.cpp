#include "iostream"

// Code that generate the multiplication table of a given number

using namespace std;

int main() {
  int num{0};
  cout << "Enter the number :";
  cin >> num;

  for (int i = 0; i <= 10; i++) {
    cout << num << " * " << i << " = " << num * i << endl;
  }
}
