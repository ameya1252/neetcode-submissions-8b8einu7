class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // nums -- ascending order
        // remove duplicates inplace
        // return unique elements (k)
        // [1, 1, 2, 2, 3, 4] --> [1, 2, 3, 4] --> output = k (4 unique elements)
        // i = 0, j = 2

        int i = 0;

        for(int j = 1; j < nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;


    }
};