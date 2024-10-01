#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> GroupAnagram(std::vector<std::string>& strs){
  std::unordered_map<std::string, std::vector<std::string>> map;
  std::vector<std::vector<std::string>> result;

  for(std::string& str : strs){
    std::string sorted = str;
    std::sort(sorted.begin(), sorted.end());

    map[sorted].push_back(str);

  }
  for(std::pair<std::string, std::vector<std::string>> p : map){
    result.push_back(p.second);
  }
  return result;
}

