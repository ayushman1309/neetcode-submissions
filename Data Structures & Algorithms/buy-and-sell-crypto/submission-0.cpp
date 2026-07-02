class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrices = INT_MAX;
        int profit = 0;
        for(int price : prices){
            if(price < minPrices) minPrices = price;
            else if(price - minPrices > profit) profit = price - minPrices;
        }
        return profit;
    }
};