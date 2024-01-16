#include <iostream>

int main() {
  int a = 5;
  int &b = a;
  int *c = &a;

  std::cout << a << b << *c << std::endl;
}
