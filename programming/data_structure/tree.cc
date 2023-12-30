#include <iostream>

#include <vector>
#include <cstring>


/*
* GRAPH REPRESENTATION
  * Adjacency Matrix
    - Create V*V matrix (V: Vertices)
    - if a[i][j] == 1 then they i and j node are connected
    - For edge weights, suppose edge weight bet'n node i and j is 3, then
      - a[i][j] == 3, if i---3-->j
    - Issue:
      - Space complexity O(N^2)
    - Advantage
      - i, j connected ?; give answer in O(1)
      - what is weight bet'n i, j; give result in O(1)
  * Adjacency List
    - If n node then create n list
    - for weight std::vector<pair<int, int>> graph;
    - Issue:
      - i, j connected ?; give answer in O(n)
      - what is weight bet'n i, j; give result in O(n)
    - Advantage:
      - Space Complexity: O(V+E)
*/

// The function `hello` takes two integers `a` and `b` as input and returns their sum.
int hello(int a, int b){
  return a+b;
}

int main(){

  // The code is reading the number of nodes and edges from the user. It is storing the number of nodes in the variable `node` and the number of edges in the variable `edge`.
  int node, edge;
  std::cin >> node >> edge;

  /* Adjacency Matrix*/
  // int graph[node+1][node+1];
  // std::memset(graph, 0, sizeof(graph));

  // for(int i=0; i<edge; ++i){
  //   int v1, v2;
  //   std::cin >> v1 >> v2;
  //   graph[v1][v2] = 1;
  //   graph[v2][v1] = 1;
  // }
  /*******************/


  /* Adjacency List*/
  std::vector<int> graph;

  // The code is reading pairs of vertices (v1, v2) from the user and adding them to the adjacency list representation of the graph.
  for (int i=0; i<edge; ++i){
    int v1, v2;
    std::cin >> v1 >> v2;

    graph[v1].push_back(v2);
    graph[v2].push_back(v1);

    // for weight
    // graph[v1].push_back({v2, weight});
    // graph[v2].push_back({v1, weight});

  }


  /*******************/


}
