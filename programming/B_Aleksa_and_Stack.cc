#include <iostream>
#include <cmath>

int main(){
	int test;
	std::cin >> test;

	while(test--){
		int n;
		std::cin >> n;

		int a[n];

		for(int i=0; i<n; i++){
			if(i%2 != 0){
				a[i] = std::pow(2, i) + 1;
			} else{
				a[i] = std::pow(2, i);
			}
		}

		for(int i=0; i<n; i++){
			std::cout << a[i] << " ";
		}

	}
}
