#include <string>
#include <vector>

static bool CustomComparator(std::string s1, std::string s2) {
  std::string word1 = s1.substr(s1.find(" ") + 1);
  std::string word2 = s2.substr(s2.find(" ") + 1);
  if (word1 == word2) return s1 < s2;
  return word1 < word2;
}

std::vector<std::string> ReorderLogFiles(std::vector<std::string>& logs) {
  std::vector<std::string> letterLogs;
  std::vector<std::string> digitLogs;

  for (std::string log : logs) {
    if (log[log.length() - 1] >= '0' && log[log.length() - 1] <= '9') {
      digitLogs.push_back(log);
    } else {
      letterLogs.push_back(log);
    }
  }

  std::sort(letterLogs.begin(), letterLogs.end(), CustomComparator);
  letterLogs.insert(letterLogs.end(), digitLogs.begin(), digitLogs.end());
  return letterLogs;
}
