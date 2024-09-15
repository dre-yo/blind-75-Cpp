/*
 * Project Name: Blind 75 C++
 * File Name: two_sum.cpp
 * Author: Drew York
 * Date: 2024-09-13
 *
 * Description: solution to the two sum leetcode problem
 *
 */
#include <iostream>
#include <map>
#include <vector>

std::vector<int> TwoSum(std::vector<int> &nums, int target) {
  int n = nums.size();
  std::vector<int> result;
  std::map<int, int> visited;

  for (int i = 0; i < n; i++) {
    int goal = target - nums[i];
    if (visited.count(goal) > 0) {
      return {visited[goal], i};
    }
    visited[nums[i]] = i;
  }
  return {};
}
int main(void) {
  std::vector<int> case1 = {2, 7, 11, 15};
  std::vector<int> case2 = {3, 2, 4};
  std::vector<int> case3 = {3, 3};
  std::vector<int> result = TwoSum(case1, 9);
  std::cout << result[0] << " " << result[1] << std::endl;
  result = TwoSum(case2, 6);
  std::cout << result[0] << " " << result[1] << std::endl;
  result = TwoSum(case3, 6);
  std::cout << result[0] << " " << result[1] << std::endl;
  return 0;
}