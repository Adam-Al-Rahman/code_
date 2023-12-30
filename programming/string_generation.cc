/*
Given a string S1 of length L1 consisting of Latin uppercase alphabets only and a string S2 of length L2 consisting of characters T and F only

Generate a lexicographically smallest string S of length (L1 + L2 -1) such that a substring of length L1 In string S starting at index (0 <= i < L2) is equal
to S1 if and only if ith element of S2 is 'T' (without quotes) else not if no such string print -1

first line input t number of test cases, each test case, first input is s1 and second input is s2

output in each test case string S
*/

#include <iostream>
#include <string>
#include <vector>

int main(){

  int test;
  std::cin >> test;

  while(test--){
    std::string s1;
    std::cin >> s1;

    std::string s2;
    std::cin >> s2;

    std::string s = s1;

    for(int i = s.size(); i < (s1.size() + s2.size() - 1); i++){
      s += "A";
    }

    std::string sub_s = "";

    for(int i = 0; i<s1.size(); i++){
      sub_s += s[i];
    }


    std::vector<char> s1_vec(s1.begin(), s1.end());
    std::vector<char> s2_vec(s2.begin(), s2.end());
    std::vector<char> sub_s_vec(sub_s.begin(), sub_s.end());

    int is_poss = 0;
    for(int i=0; i<s2.size(); i++){
      if(s2_vec[i] == 'T' && sub_s_vec[i] == s1_vec[i]){
        is_poss = 1;
      } else if (s2_vec[i] == 'F'){
        continue;
      } else{
        is_poss = 0;
      }
    }

    if (is_poss){
      std::cout << s << std::endl;
    } else {
      std::cout << -1 << std::endl;
    }




  }

}