/*
 * Project Name: Blind 75 C++
 * File Name: max_sub_array.cpp
 * Author: Drew York
 * Date: 2024-09-13
 *
 * Description: solution to the maximum subarray
 * leetcode problem
 *
 */
#include <iostream>
#include <vector>

int MaxSubArray(std::vector<int>& nums) {
  int n = nums.size();
  int max = nums[0];
  int currSum = 0;

  for (int i = 0; i < n; i++) {
    if (currSum < 0) {
      currSum = 0;
    }
    currSum += nums[i];
    max = std::max(max, currSum);
  }
  return max;
}

void RunTest(int test_case_num, std::vector<int>& prices, int expected) {
  int result = MaxSubArray(prices);
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
  std::vector<int> case1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  std::vector<int> case2 = {1};
  std::vector<int> case3 = {5, 4, -1, 7, 8};

  RunTest(1, case1, 6);
  RunTest(2, case2, 1);
  RunTest(3, case3, 23);
  return 0;
}