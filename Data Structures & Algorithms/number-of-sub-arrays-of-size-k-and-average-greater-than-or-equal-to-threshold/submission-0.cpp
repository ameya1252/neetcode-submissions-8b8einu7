class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        // [2,2,2,2,5,5,5,8]
        // 
        
        //unordered_map<vector<int>, int> hash; //window, avg
        int sum = 0;
        int i = 0;
        int j = i+k;
        int counter = 0;




        while(j < arr.size()+1){
            int sum = 0;
            //i = j-k;

            for(i = j-k; i<j; i++){

                sum += arr[i];
                cout<<arr[i]<<endl;
            }
            cout<<endl<<endl;
            
            

            if(sum/k >= threshold){
                
                counter++;
            }

            j++;
//[2,2,2,2,5,5,5,8]

        }

        // for(int n : store){
        //     cout<<n<<endl;
        // }

        return counter; 

        
    }
};