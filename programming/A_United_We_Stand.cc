#include <iostream>
#include <vector>
#include <array>

int main(){

  int test;
  std::cin >> test;

  while(test--){
    int n;
    std::cin >> n;

    std::vector<int> a;
    for(int i=0; i<n; i++){
      a.push_back(i);
    }

    std::vector<int> b;
    std::vector<int> c;

    int i = 0;
    while(i < n){
      if (a[i] % a[i+1] != 0){
        b.push_back(a[i]);
        c.push_back(a[i+1]);
        i += 2;
      } else if (n % 2 == 1){
        b.push_back(a[i]);
      }
      i += 1;
    }

  }


}