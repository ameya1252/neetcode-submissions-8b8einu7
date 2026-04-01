class Solution {
public:
    bool isValid(string s) {
        int i = 0;
        int n = s.size();

        if(n%2 != 0){
            return false;
        }

        unordered_map<char, char> brackets = {{'(',')'}, {'[',']'}, {'{','}'}};

        stack<char> st;

        for(char c : s){

            if(brackets.count(c)){

                st.push(c);
            }
            else{

                if(st.empty()){
                    return false;
                }

                char top = st.top();
                st.pop();

                if(c != brackets[top]){
                    return false;
                }

            }
        }

        return st.empty();
    }
};
