/*
 * Project Name: Blind 75 C++
 * File Name: contains_duplicate.cpp
 * Author: Drew York
 * Date: 2024-09-13
 *
 * Description: solution to the contains duplicate leetcode problem
 *
 */

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
