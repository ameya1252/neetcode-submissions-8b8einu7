class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // Input: nums = [1,1,2,3,4], val = 1
        //Output: [2,3,4]
        
        int i = 0;

        for(int j = 0; j < nums.size(); j++){

            if(nums[j] != val){

                nums[i] = nums[j];
                i++;
            }

        }

        return i;
    }
};