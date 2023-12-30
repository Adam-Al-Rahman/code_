#include <iostream>

int min(int x, int y){
	if (x < y){
		return x;
	}

	return y;
}

int main(){
	int test;
	std::cin >> test;

	while(test--){
	 char a[10][10];

	 for(int i=0; i<n; i++){
		 for(int j=0; j<n; j++){
			 char x;
			 std:cin>> x;
			 a[i][j]  = x;
		 }
	 }

	 int sum = 0;

	 for(int i=0; i<10; i++){
		 for(int j=0; j<10; j++){
			 if (i < 5 && j < 5 && a[i][j] == 'x'){
				sum += min(i, j) + 1;
			 }else{
				 sum += min(
			 }
		 }
	 }


	}
}
