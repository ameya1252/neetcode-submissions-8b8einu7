class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> countss(26, 0);
        int idx = 0;
        for(char c : s){
            idx = c - 'a';
            countss[idx]++;
        }
        for(char c : t){
            idx = c - 'a';
            countss[idx]--;
        }

        for(int n : countss){
            if(n != 0){
                return false;
            }
        }
        return true;

    }
};
