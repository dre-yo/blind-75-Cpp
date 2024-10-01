#include <string>

int CountSubstrings(std::string s){
  int res = 0;
  int n = s.size();

  for(int i = 0; i < n; i++){
    // odd length
    int left = i;
    int right = i;
    while(left >= 0 && right < n && s[left] ==s[right]){
      res++;
      left--;
      right++;
    }

    // even length substrings
    left = i;
    right = i + 1;
    while(left >= 0 && right < n && s[left] == s[right]){
      res++;
      left--;
      right++;
    }
  }
  return res;
}
