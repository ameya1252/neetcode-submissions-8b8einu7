class Solution {
public:
    int findLonelyPixel(vector<vector<char>>& picture) {
        // 0,2  1,1  2,0

        int m = picture.size();
        int n = picture[0].size();

        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);

        int count = 0;

        for (int i = 0; i < picture.size(); i++) {

            for (int j = 0; j < picture[i].size(); j++) {

                if(picture[i][j] == 'B'){

                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }
        
         for (int i = 0; i < picture.size(); i++) {

            for (int j = 0; j < picture[i].size(); j++) {
                if (picture[i][j] == 'B' && rowCount[i] == 1 && colCount[j] == 1){
                    count++;
                }


            }
         }






        return count;
    }
};
