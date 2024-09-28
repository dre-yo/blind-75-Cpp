/*
 * Project Name: Blind 75 C++
 * File Name: most_water.cc
 * Author: Drew York
 * Date: 2024-09-28
 *
 * Description: solution to the most 
 * water leetcode problem
 */
#include <iostream>
#include <vector>
#include <limits>

int MaxArea(std::vector<int>& height) {
  int n = height.size();
  int l = 0;
  int r = n - 1;
  int max = std::numeric_limits<int>::min();

  while(l < r){
    int currSum = std::min(height[l], height[r]) * (r - l);
    
    max = std::max(currSum, max);

    if (height[l] < height[r]){
      l++;
    }else{
      r--;
    }
  }
  return max;
}
