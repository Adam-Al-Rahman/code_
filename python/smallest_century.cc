#include <iostream>
#include <vector>

int main() {
  std::vector<int> all_numbers;

  int current_num = 0;
  while (current_num > -1) {

    std::cin >> current_num;
    if (current_num >= 100) {
      all_numbers.push_back(current_num);
    }
  }

  int min_num = all_numbers[0];

  for (int i = 0; i < all_numbers.size(); i++) {
    if (min_num > all_numbers[i]) {
      min_num = all_numbers[i];
    }
  }

  std::cout << min_num;
  return min_num;
}