/*
 * Project Name: Blind 75 C++
 * File Name: buy_sell_stock.cpp
 * Author: Drew York
 * Date: 2024-09-13
 *
 * Description: solution to the buy and sell stock leetcode problem
 *
 */

#include <iostream>
#include <vector>
int MaxProfit(std::vector<int> &prices) {
  int l;                  // buy
  int r;                  // sell
  int n = prices.size();  // length of array
  int max = 0;            // max profit

  l = 0;
  r = 1;

  while (r < n) {
    // if buy price bigger than sell price buy pointer moves to sell
    if (prices[r] < prices[l]) {
      l = r;
    }
    // if sale price larger than buy price check if max
    else if (prices[r] > prices[l]) {
      max = std::max(max, prices[r] - prices[l]);
    }
    r++;
  }
  return max;
}

void RunTest(int test_case_num, std::vector<int> &prices, int expected) {
  int result = MaxProfit(prices);
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
  std::vector<int> case1 = {7, 1, 5, 3, 6, 4};
  std::vector<int> case2 = {7, 6, 4, 3, 1};

  RunTest(1, case1, 5);
  RunTest(2, case2, 0);

  return 0;
}