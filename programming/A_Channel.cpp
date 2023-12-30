#include <iostream>
#include <string>


int main(){
  int test;
  std::cin >> test;

  while(test--){
    int n, a, q;
    std::cin >> n >> a >> q;

    std::string signs;
    std::cin >> signs;

    int pq = 0;
    int nq = 0;


    for (int i = 0; i < q; i++){
      if (signs[i] == '+'){
        pq += 1;
      } else {
        nq += 1;
      }
    }

    if (n == a || (n == (a + pq - nq))){
      std::cout << "YES" << std::endl;
    } else if (pq == nq){
      std::cout << "MAYBE" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }

  }
}