class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp; //char, index

        int l = 0;
        int max_size = 0;

        for(int r = 0; r < s.size(); r++){

            if(mp.count(s[r])){

                l = max(l, mp[s[r]] + 1);
            }
            mp[s[r]] = r;
            max_size = max(max_size, r-l+1);
            

            

        }        

        return max_size;
        
    }
};
