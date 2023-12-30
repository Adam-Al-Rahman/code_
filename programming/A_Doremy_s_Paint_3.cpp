#include <iostream>

int main() {
  int test;
  std::cin >> test;

  while (test--) {
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
      if ((a[i - 1] + a[i]) != (a[i] + a[i + 1])) {
        a[i] = a[i] ^ a[i - 1];
        a[i - 1] = a[i] ^ a[i - 1];
        a[i] = a[i] ^ a[i - 1];
      }
    }

    int yes = 0;

    for (int i = 1; i < n; i++) {

      if ((a[i - 1] + a[i]) == (a[i] + a[i + 1])) {
        yes = 1;
      } else {
        yes = 0;
      }
    }

    if (yes) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
}