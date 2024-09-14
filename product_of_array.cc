/*
 * Project Name: Blind 75 C++
 * File Name: product_of_array.cpp
 * Author: Drew York
 * Date: 2024-09-13
 *
 * Description: solution to the product of array except
 * self leetcode problem
 *
 */
#include <iostream>
#include <vector>

std::vector<int> ProductExceptself(std::vector<int>& nums) {
  // Initialize answer vector full of 1s
  // This is because we will be multiplying the prefix and postfix
  // products together, and multiplying by 1 doesn't change the value
  int n = nums.size();
  std::vector<int> ans(n, 1);

  // Initialize the prefix and postfix products
  int prefix = 1;
  int postfix = 1;

  // Iterate through the array and calculate the prefix products
  // The prefix product is the product of all numbers to the left of the current
  // number
  for (int i = 0; i < n; i++) {
    // Store the current prefix product in the answer vector
    ans[i] = prefix;
    // Update the prefix product by multiplying it by the current number
    prefix *= nums[i];
  }

  // Iterate through the array in reverse order and calculate the postfix
  // products The postfix product is the product of all numbers to the right of
  // the current number
  for (int i = n - 1; i >= 0; i--) {
    // Multiply the current answer by the postfix product
    ans[i] *= postfix;
    // Update the postfix product by multiplying it by the current number
    postfix *= nums[i];
  }

  // Return the answer vector
  return ans;
}

// Helper function to print a vector
void printVector(const std::vector<int>& vec) {
  std::cout << "[ ";
  for (const auto& elem : vec) {
    std::cout << elem << " ";
  }
  std::cout << "]\n";
}

void runTest(int test_case_number, std::vector<int>& nums,
             std::vector<int>& expected) {
  std::vector<int> result = ProductExceptself(nums);
  std::cout << "Case " << test_case_number << " expected: ";
  printVector(expected);
  std::cout << "Case " << test_case_number << " result: ";
  printVector(result);

  if (result != expected) {
    std::cout << "Test Case " << test_case_number << " Failed!\n";
  } else {
    std::cout << "Test Case " << test_case_number << " Passed.\n";
  }
  std::cout << "\n";
}

int main(void) {
  std::vector<int> case1 = {1, 2, 3, 4};
  std::vector<int> expected_case1 = {24, 12, 8, 6};

  std::vector<int> case2 = {-1, 1, 0, -3, 3};
  std::vector<int> expected_case2 = {0, 0, 9, 0, 0};

  runTest(1, case1, expected_case1);
  runTest(2, case2, expected_case2);

  return 0;
}
