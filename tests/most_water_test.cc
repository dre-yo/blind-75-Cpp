#include "../solution/most_water.cc"
#include <vector>
#include <gtest/gtest.h> 

TEST(MostWaterTest, SolutionTest) {
  std::vector<int> height = {1,8,6,2,5,4,8,3,7};
  int result = MaxArea(height);
  int expected = 49;
  EXPECT_EQ(result, expected);
}

TEST(MostWaterTest, EdgeCaseTest) {
  std::vector<int> height = {1,1};
  int result = MaxArea(height);
  int expected = 1;
  EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
