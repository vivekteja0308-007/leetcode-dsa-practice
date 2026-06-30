class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPr=0,bestBuy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>bestBuy)
            {
                maxPr=max(maxPr,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return maxPr;
    }
};
