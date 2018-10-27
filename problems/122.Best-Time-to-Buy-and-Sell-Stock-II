class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(vector<int>::iterator iter = prices.begin(); iter != prices.end(); iter++){
            if( iter + 1 == prices.end()) break;
            else if( *iter < *(iter+1)) profit += *(iter+1) - *iter;
        }
        return profit;
    }
};