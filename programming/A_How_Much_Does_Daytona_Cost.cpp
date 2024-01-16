#include <iostream>

int main() {
  int test;
  std::cin >> test;

  while (test--) {
    int n, k;
    std::cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }

    int k_count = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] == k)
        k_count++;
    }

    if (k_count >= 1) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
}