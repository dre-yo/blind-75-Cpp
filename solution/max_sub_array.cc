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
