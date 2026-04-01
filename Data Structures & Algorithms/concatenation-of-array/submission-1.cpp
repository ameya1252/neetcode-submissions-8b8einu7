class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        //vector<int> ans(n, 0);

        for(int j = n - 1; j < 2*n - 1; j++){
            nums.push_back(nums[i]);
            i++;
        }

        return nums;
    }
};