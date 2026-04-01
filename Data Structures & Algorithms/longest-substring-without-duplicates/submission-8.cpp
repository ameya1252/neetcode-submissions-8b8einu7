class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> store;

        int l = 0;
        int max_size = 0;

        for(int r = 0; r < s.size(); r++){

            if(store.count(s[r]) and store[s[r]] >= l){
                
                l = store[s[r]]+1;
            }
            store[s[r]] = r;

            max_size = max(max_size, r-l+1);

        }

        return max_size;
        
    }
};
