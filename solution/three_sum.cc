/*
 * Project Name: Blind 75 C++
 * File Name: three_sum.cc
 * Author: Drew York
 * Date: 2024-09-16
 *
 * Description: solution to the three sum
 * leetcode problem
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> ThreeSum(std::vector<int>& nums){
  int n = nums.size();
  std::vector<std::vector<int>> result;
  sort(nums.begin(), nums.end());
  
  for(int i = 0; i < n;  i++){
    if(i > 0 && nums[i] == nums[i-1]){
      continue;
    }
    int j = i + 1;
    int k = n - 1;

    while(j < k){
      int sum = nums[i] + nums[j] + nums[k];
      if (sum == 0){
        result.push_back({nums[i], nums[j], nums[k]});
        j++;
        while(nums[j] == nums[j-1] && j < k){
          j++;
        }
      } else if(sum  > 0){
        k--;
      } else if (sum < 0){
        j++;
      }
    } 
  }

  return result;
  
}
