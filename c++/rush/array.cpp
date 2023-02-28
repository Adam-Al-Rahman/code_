#include <iostream>

int main() {
  int test_scores[5]{100, 95, 99, 97, 88};
  int high_score_per_level[10]{3, 5};  // init to 3,5 and remaining to 0;

  const int days_in_year{365};
  double hi_temperatures[days_in_year]{0};  // init all to zero

  int another_array[6]{1, 2, 3, 4, 5};  // size automatically calculated

  // Assignment of array
  another_array[5] = 6;
  std::cout << &another_array << std::endl;         // 0x7ffe8e1f5ad0
  std::cout << &another_array + 1 << std::endl;     // 0x7ffe8e1f5ae8
  std::cout << (&another_array + 1) << std::endl;   // 0x7ffe8e1f5ae8
  std::cout << *(&another_array + 1) << std::endl;  // 0x7ffe8e1f5ae8
  std::cout << another_array << std::endl;          // 0x7ffe8e1f5ad0
  std::cout << *(&another_array + 1) - another_array << std::endl;  // 6

  int* p;
  for (p = &another_array[0]; p <= &another_array[5]; p++) std::cout << *p;
}