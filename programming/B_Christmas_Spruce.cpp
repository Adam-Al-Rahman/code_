#include <iostream>
#include <vector>
#include <map>

int main(){

  int n_vertices;
  std::cin >> n_vertices;

  int current_node;
  std::map<int, std::vector<int>> graph;

  for(int i=0; i<n_vertices; i++){
    int x;
    std::cin >> x;
    current_node = x;
    current_node += 1;

    auto it = graph.find(x);

    if (it != graph.end()){
      it->second.push_back(current_node);
    } else {
      graph[x].push_back(current_node);
    }
  }

}