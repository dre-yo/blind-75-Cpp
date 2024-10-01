#include <string>

std::string LongestPalindrome(std::string s) {
  std::string res = "";
  int res_len = 0;
  int n  = s.size();
  
  for(int i = 0; i < n; i++){
    // strings of odd length
    int left = i;
    int right = i;

    while(
        left >= 0 &&
        right < n &&
        s[left] == s[right]
        ){
      if((right - left + 1) > res_len){
        res = s.substr(left, right - left + 1);
        res_len = right - left + 1;
      }
      left--;
      right++;
    }

    // strings of even length
    left = i;
    right = i + 1;
    while(
        left >= 0 &&
        right < n &&
        s[left] == s[right]
        ){
      if((right - left + 1) > res_len){
        res = s.substr(left, right - left + 1);
        res_len = right - left + 1;
      }
      left--;
      right++;
    }
  }
  return res;
}
