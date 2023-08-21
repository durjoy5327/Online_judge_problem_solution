class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int re=0,min =0;
        for(int i=0;i<prices.size();i++){
            if(prices[min]> prices[i])min = i;
            if(re<prices[i]-prices[min])re= prices[i] - prices[min];
        }
        return re;
    }
};