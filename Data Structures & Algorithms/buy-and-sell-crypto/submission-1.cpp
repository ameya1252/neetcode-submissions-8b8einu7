class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxi = -101;
        int l = 0;
        
        for(int r = 0; r < prices.size(); r++){

            if(prices[r] - prices[l] < 0){
                maxi = max(maxi, prices[r] - prices[l]);
                l = r;
            }
            else{
                maxi = max(maxi, prices[r] - prices[l]);
            }
            
        }
        
        if(maxi < 0){
            return 0;
        }
        return maxi;


    }
};
