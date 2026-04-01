class Solution {
public:
    bool isPalindrome(string s) {
        int x = 0;
        int y = s.size()-1;

        while(x < y){

            while(x < y and !isalnum(s[x])){
                x++;
            }
            while(x < y and !isalnum(s[y])){
                y--;
            }

            if(tolower(s[x]) != tolower(s[y])) {
                return false;
            }
            x++;
            y--;
            
        }
        return true;
    }
};
