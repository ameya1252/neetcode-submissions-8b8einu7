class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> hash;
        int index = 0;

        for(int& n : nums){

            if(hash.count(n) && abs(hash[n]-index) <= k){
                return true;
            }
            
            hash[n] = index;

            index++;
        }

        return false;
    }
};