#include <iostream>
#include <string>
#include <bitset>

bool is_palindrome(const std::bitset<64>& bitset) {
    size_t size = bitset.size();

    for (size_t i = 0; i < size / 2; ++i) {
        if (bitset[i] != bitset[size - i - 1]) {
            return false;
        }
    }

    return true;
}


int main(){
  int test;
  std::cin >> test;

  while(test--){
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;
    std::bitset<64> s_val(s);

    std::string l;
    std::bitset<64> l_val(l);

    std::string t;
    std::bitset<64> t_val(t);

    for(size_t i=0; i<n; i++){
      if(is_palindrome(s_val)){
        break;
      }



    }


  }
}