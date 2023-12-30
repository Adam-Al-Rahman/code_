#include <iostream>
#include <vector>

int main(){
  int test;
  std::cin>> test;

  while(test--){
    int n;
    std::cin>> n;

    int s[n];
    int e[n];

    for(int i=0; i<n; i++){
	    std::cin>> s[i] >> e[i];
    }
	int max_el = e[1];
	int max_el_index;

	for(int i=2; i<n; i++){
		if (max_el > e[i]){
			max_el = e[i];
			max_el_index = i;
		};
	}


    int weight = s[0];

    if(s[max_el_index] < s[0]){
	    std::cout << weight << std::endl;
    } else {
	    std::cout << -1 << std::endl;
    }
  }
}
