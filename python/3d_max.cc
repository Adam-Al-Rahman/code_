
#include <iostream>
#include <stack>
#include <vector>

int main() {
  std::vector<int> store_num;
  int num;
  std::cin >> num;

  while (num != -1) {
    store_num.push_back(num);
    std::cin >> num;
  }

  std::stack<std::pair<int, int>> stack;
  int i = 0;
  while (i < store_num.size()) {
    int a = store_num[i], counter = 0;
    int temp = a;
    while (temp != 0) {
      counter++;
      temp /= 10;
    }
    if (counter == 3) {
      if (!stack.empty() && stack.top().first == 3) {
        if (stack.top().second < store_num[i]) {
          stack.pop();
          stack.push({counter, store_num[i]});
          store_num.erase(store_num.begin() + i - 1);
        } else {
          store_num.erase(store_num.begin() + i);
        }
      } else {
        stack.push({counter, store_num[i]});
        i++;
      }
    } else {
      stack.push({counter, store_num[i]});
      i++;
    }
  }

  for (int i = 0; i < store_num.size(); i++) {
    std::cout << store_num[i] << std::endl;
  }
  return 0;
}