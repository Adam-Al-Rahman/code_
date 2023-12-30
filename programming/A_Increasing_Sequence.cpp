#include <iostream>

int main(){
  int test;
  std::cin >> test;

  while(test--){

    int n;
    std::cin >> n;

    int a[n];
    for(int i = 0; i<n; i++){
      std::cin >> a[i];
    }

    int b[n];
    b[0] = a[0];
    for(int i=0; i<n; i++){
      if (b[] > 0 && a[i] != current_val){
        b[i] = current_val;
        current_val = a[i+1];
      }
    }



  }
}