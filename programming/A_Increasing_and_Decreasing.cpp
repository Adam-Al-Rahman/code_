#include <iostream>
#include <vector>

int main(){
  int test;
  std::cin >> test;

  while(test--){
    int x, y, n;
    std::cin >> x >> y >> n;
    std::vector<int> a = {x};

    for(int i=x; i<=y; i++){
    }

    if (a.size() == n){
      for (int val : a){
        std::cout << val << " ";
      }
    } else {
      std::cout << -1;
    }

  }
}