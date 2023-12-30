#include <iostream>

int main(){
  int test;
  std::cin >> test;

  while(test--){
    int num_days;
    int type_task;

    std::cin >> num_days >> type_task;

    int amount[num_days] = {};

    for (int i =0; i<num_days; i++){
      std::cin >> amount[i];
    }


  }


}