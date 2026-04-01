class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> maxh;

        for(auto& s : stones){

            maxh.push(s);
        }

        while(maxh.size() > 1){

            int x = maxh.top();
            maxh.pop();
            int y = maxh.top();
            if(x == y){
                maxh.pop();
            }
            else{
                maxh.pop();
                maxh.push(x-y);
            }


            
        }

        if(maxh.size() > 0 ){
            return maxh.top();
        }
        else{
            return 0;
        }


    }
};
