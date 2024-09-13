#include <iostream>
#include <vector>
int MaxProfit(std::vector<int>& prices){
    int l; // buy
    int r; // sell
    int n = prices.size(); // length of array
    int max = 0; // max profit

    l = 0;
    r = 1;

    while (r < n){
        if (prices[r] < prices[l]){
            l = r;
        }
        else if (prices[r] > prices[l]){
            max = std::max(max, prices[r] - prices[l]);
        }
        r++;
    }
    return max;
}



void runTest(int testCaseNum, std::vector<int>& prices, int expected) {
    int result = MaxProfit(prices);
    std::cout << "Case " << testCaseNum << " expected: " << expected << "\n";
    std::cout << "Case " << testCaseNum << " result: " << result << "\n";
    
    if (result != expected) {
        std::cout << "Test Case " << testCaseNum << " Failed!\n";
    } else {
        std::cout << "Test Case " << testCaseNum << " Passed.\n";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> case1 = {7, 1, 5, 3, 6, 4};
    std::vector<int> case2 = {7, 6, 4, 3, 1};

    runTest(1, case1, 5);
    runTest(2, case2, 0);

    return 0;
}