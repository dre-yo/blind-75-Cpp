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

#include <algorithm>
#include <iostream>
#include <vector>

int MaxProduct(std::vector<int>& nums) {
  int n = nums.size();
  int max = *std::max_element(nums.begin(), nums.end());
  int currMax = 1;
  int currMin = 1;

  for (int i = 0; i < n; i++) {
    if (nums[i] == 0) {
      currMax = 1;
      currMin = 1;
      continue;
    }
    int temp = currMax * nums[i];
    currMax = std::max({nums[i] * currMax, nums[i] * currMin, nums[i]});
    currMin = std::min({nums[i] * currMin, temp, nums[i]});
    max = std::max(max, currMax);
  }
  return max;
}
