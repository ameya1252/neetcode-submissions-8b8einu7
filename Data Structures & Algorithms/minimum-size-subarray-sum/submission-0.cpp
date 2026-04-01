class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int curr_sum = 0;
        int r = 0;
        int l = 0;
        int min_len = 100;

        while(r < nums.size()){
            
            curr_sum = 0;
            
            for(int i = l; i <= r; i++){

                curr_sum += nums[i];
                //cout<<l<<endl<<r<<endl<<endl;
            }
            cout<<r-l+1<<endl;
            if(curr_sum >= target){
                min_len = min(min_len, r-l+1);
                l++;
            }
            else{
                r++;
            }

            


        }
        if(min_len == 100){
            return 0;
        }
        return min_len;

    }
};