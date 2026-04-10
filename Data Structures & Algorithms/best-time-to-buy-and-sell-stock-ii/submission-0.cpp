class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int profit = 0;
    for (int i = 1; i < prices.size(); i++) {
        // If price goes up, we buy at day i-1 and sell at i
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
    }
};