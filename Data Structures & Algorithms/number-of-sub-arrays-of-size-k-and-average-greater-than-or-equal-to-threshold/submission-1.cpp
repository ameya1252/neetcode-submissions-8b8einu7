class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int sum = 0;
        int i = 0;
        int j = i+k;
        int counter = 0;



        while(j < arr.size()+1){
            int sum = 0;

            for(i = j-k; i<j; i++){

                sum += arr[i];
                cout<<arr[i]<<endl;
            }
            cout<<endl<<endl;
            
            

            if(sum/k >= threshold){
                
                counter++;
            }

            j++;

        }


        return counter; 

        
    }
};