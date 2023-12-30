#include <iostream>
#include <vector>
#include <map>

int main(){
  int test;
  std::cin>> test;

  while(test--){
    int n;
    std::cin>> n;

    int a[n];
    for(int i=0; i<n; i++){
      std::cin>> a[i];
    }

    int b[n];
    for(int i=0; i<n; i++){
      std::cin>> b[i];
    }

    std::map<int, std::vector<int>> graph;

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if((a[i] - a[j] >= b[i] - b[j])){
          graph[i+1].push_back(j+1);
        }
      }
    }


    for(const auto& pair : graph) {
      int key = pair.first;
      const std::vector<int>& values = pair.second;

      std::cout << key << " -> ";
      for(int value : values) {
          std::cout << value << " ";
      }
      std::cout << std::endl;
    }






  }
}