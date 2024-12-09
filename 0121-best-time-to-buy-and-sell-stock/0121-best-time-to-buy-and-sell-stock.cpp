class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int minPrice = INT_MAX; // Keep track of the minimum price seen so far
    int maxProfit = 0;      // Keep track of the maximum profit

    for (int price : prices) {
        // Update the minimum price
        minPrice = min(minPrice, price);

        // Calculate the profit and update the maximum profit
        maxProfit = max(maxProfit, price - minPrice);
    }

    return maxProfit;
    }
};