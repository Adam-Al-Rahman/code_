#include <iostream>
#include <string>


int main(){
  int test;
  std::cin >> test;

  while(test--){
    int n, m;
    std::cin >> n >> m;


    std::string is_vika = "";
    std::string vika = "vika";


    std::string latin;

    for(int i = 0; i<n; i++){
      std::string x;
      std::cin >> x;
      latin += x;
    }

    int it = 0;
    it += 4;

    for (int i=0; i<n*m; i++){
 
    }

    if (is_vika == vika ){
      std::cout << "yes"<< std::endl;
    } else {
      std::cout << "no"<< std::endl;
    }
  }
}