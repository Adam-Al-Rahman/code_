
#include <iostream>
#include <stack>
#include <vector>

int main() {
  std::vector<int> store_num;
  int num;
  std::cin >> num;

  std::vector<int> result;
  while (num != -1) {
    store_num.push_back(num);
    std::cin >> num;
  }

  for (int i = 0; i < store_num.size(); i++) {

    if (store_num[i] < 100 && store_num[i + 1] < 100) {
      result.push_back(store_num[i] + store_num[i + 1]);
    } else {
      result.push_back(store_num[i]);
    }
  }

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << std::endl;
  }

  return result.size();
}