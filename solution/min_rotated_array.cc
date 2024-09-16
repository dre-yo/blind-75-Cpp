/*
 * Project Name: Blind 75 C++
 * File Name: min_rotated_array.cpp
 * Author: Drew York
 * Date: 2024-09-16
 *
 * Description: solution to the
 * minimum in a rotated sorted array leetcode problem
 *
 */

#include <iostream>
#include <vector>

int FindMin(std::vector<int> &nums) {
  int n = nums.size();
  int l = 0;
  int r = n - 1;
  int m;
  int result = nums[0];
  while (l <= r) {
    if (nums[l] < nums[r]) {
      result = std::min(result, nums[l]);
    }
    m = (l + r) / 2;
    result = std::min(result, nums[m]);
    if (nums[m] >= nums[l]) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }
  return result;
}
