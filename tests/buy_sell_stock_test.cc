#include "../solution/buy_sell_stock.cc"

#include <gtest/gtest.h>

TEST(MaxProfitTest, EmptyVector) {
  std::vector<int> prices;
  EXPECT_EQ(MaxProfit(prices), 0);
}

TEST(MaxProfitTest, SingleElementVector) {
  std::vector<int> prices = {1};
  EXPECT_EQ(MaxProfit(prices), 0);
}

TEST(MaxProfitTest, NoProfitPossible) {
  std::vector<int> prices = {5, 4, 3, 2, 1};
  EXPECT_EQ(MaxProfit(prices), 0);
}

TEST(MaxProfitTest, ProfitPossible) {
  std::vector<int> prices = {1, 2, 3, 4, 5};
  EXPECT_EQ(MaxProfit(prices), 4);
}

TEST(MaxProfitTest, MultiplePeaksAndValleys) {
  std::vector<int> prices = {7, 1, 5, 3, 6, 4};
  EXPECT_EQ(MaxProfit(prices), 5);
}

TEST(MaxProfitTest, EdgeCaseEqualPrices) {
  std::vector<int> prices = {1, 1};
  EXPECT_EQ(MaxProfit(prices), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}