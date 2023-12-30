#include <iostream>


int main(){
  int test;
  std::cin >> test;

  while(test--){
    int n;
    std::cin >> n;

    int array[n];
    for(int i=0; i<n; i++){
      std::cin >> array[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
      sum += array[i];
    }

    int result = sum - array[0];
    if (result % 2 == array[0] % 2 ){
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }


  }
}