class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  max_dif=0;
        int min_val=prices[0];
        
        for(int i=1;i<prices.size();i++){
            min_val=min(min_val,prices[i]);
            max_dif=max(max_dif,prices[i]-min_val);
        }
        return max_dif;
        
    }
};