class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;

        for(int i = 0; i < nums.size(); i++){

            int remaining_number = target - nums[i];

            if(check.count(remaining_number)){

                return {check[remaining_number], i};
            }

            check[nums[i]] = i;
        }
        
        return {};
    }
};
