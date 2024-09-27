/*
 * Project Name: Blind 75 C++
 * File Name: search_rotated_array.cpp
 * Author: Drew York
 * Date: 2024-09-16
 *
 * Description: solution to the search in a rotated
 * sorted array leetcode problem
 *
 */
#include <iostream>
#include <vector>

int Search(std::vector<int>& nums, int target) {
  int n = nums.size();
  int l = 0;
  int r = n - 1;
  int m;
  int result = -1;
  while (l <= r) {
    m = (l + r) / 2;
    if (nums[m] == target) {
      result = m;
      break;
    }
    if (nums[l] <= nums[m]) {
      if (target >= nums[l] && target < nums[m]) {
        r = m - 1;
      } else {
        l = m + 1;
      }
    } else {
      if (target <= nums[r] && target > nums[m]) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }
  }
  return result;
}
