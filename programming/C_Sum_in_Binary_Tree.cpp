#include <iostream>


int main(){
  int test;
  std::cin >> test;

  while(test--){
    int n;
    std::cin >>  n;

    int init_n = n;
    int quote = 0;

    while(n != 1){

      quote += (n / 2);
      n /= 2;
    }

    std::cout << quote + init_n<< std::endl;

  }

}