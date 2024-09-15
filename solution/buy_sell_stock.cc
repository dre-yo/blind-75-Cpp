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
