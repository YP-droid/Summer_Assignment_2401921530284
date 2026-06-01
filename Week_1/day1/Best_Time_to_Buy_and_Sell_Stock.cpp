class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //we use mini to track the minimum price seen so far
        
        int mini = prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            profit = max(profit,prices[i]-mini);
            if(prices[i]<mini)mini = prices[i];
        }
        
        return profit;
    }
};