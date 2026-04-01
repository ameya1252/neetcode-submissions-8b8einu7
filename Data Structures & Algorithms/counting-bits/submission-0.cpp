class Solution {
public:
    vector<int> countBits(int n) {
        int count = 0;
        vector<int> store;

        for(int i = 0; i < n+1; i++){
            int num = i;
            int count = 0;

            while(num != 0){

                if(num & 1 == 1){

                    count++;
                }
                
                num = num >> 1;
            }
        store.push_back(count);
        }

        

        return store;

    }
};
