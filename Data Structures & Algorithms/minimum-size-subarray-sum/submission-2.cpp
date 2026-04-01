class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int curr_sum = 0;
        int l = 0;
        int min_len = 100;

        for(int r = 0; r < nums.size(); r++){
        
            
            curr_sum += nums[r];
            //cout<<r-l+1<<endl;
            while(curr_sum >= target){
                min_len = min(min_len, r-l+1);
                curr_sum -= nums[l];
                l++;
                
            }

        }
        if(min_len == 100){
            return 0;
        }
        return min_len;

    }
};