#include <iostream>

int main(){
  int test;
  std::cin >> test;

  while(test--){
	int n;
	std::cin >> n;

	int a[n];
	for(int i=0; i<n; i++){
		std::cin>> a[i];
	}
	
	int min_val = a[0];	
	int min_val_index = 0;
	for(int i=1; i<n; i++){
		if (a[i] < min_val) {
			min_val = a[i];
			min_val_index = i;
		}
	}

	a[min_val_index] += 1;

	int product = 1;
	for(int i=0; i<n; i++){
		product *= a[i];
	}

	std::cout << product << std::endl;

  }
}
