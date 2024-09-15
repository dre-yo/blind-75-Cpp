/*
 * Project Name: Blind 75 C++
 * File Name: max_prod_sub_array.cpp
 * Author: Drew York
 * Date: 2024-09-13
 *
 * Description: solution to the maximum
 * product subarray leetcode problem
 *
 */

#include <iostream>
#include <vector>

int MaxProduct(std::vector<int>& nums) {
  int n = nums.size();
  int max = nums[0];
  int currMax = 1;
  int currMin = 1;
}

void RunTest(int test_case_num, std::vector<int>& prices, int expected) {
  int result = MaxProduct(prices);
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
  std::vector<int> case1 = {2, 3, -2, 4};
  std::vector<int> case2 = {-2, 0, -1};
  RunTest(1, case1, 6);
  RunTest(2, case2, 0);
  return 0;
}