#include <iostream>
#include <unordered_set>
#include <vector>

bool ContainsDuplicate(std::vector<int> &nums) {
  std::unordered_set<int> visited;
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    if (visited.count(nums[i])) {
      return true;
    }
    visited.insert(nums[i]);
  }
  return false;
}

void runTest(int test_case_num, std::vector<int> &nums, bool expected) {
  bool result = ContainsDuplicate(nums);
  std::cout << "Case " << test_case_num << " expected: " << expected << "\n";
  std::cout << "Case " << test_case_num << " result: " << result << "\n";

  if (result != expected) {
    std::cout << "Test Case " << test_case_num << " Failed!\n";
  } else {
    std::cout << "Test Case " << test_case_num << " Passed.\n";
  }
  std::cout << "\n";
}

int main(void) {
  std::vector<int> case1 = {1, 2, 3, 1};
  std::vector<int> case2 = {1, 2, 3, 4};
  std::vector<int> case3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

  runTest(1, case1, true);
  runTest(2, case2, false);
  runTest(3, case3, true);
  return 0;
}