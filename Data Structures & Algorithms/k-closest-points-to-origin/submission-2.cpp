class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int, vector<int>>> maxh;
        vector<vector<int>> ans;

        for(auto& p : points){
            int dist = p[0]*p[0] + p[1]*p[1];
            maxh.push({dist, p});

            if(maxh.size() > k){
                maxh.pop();
            }
        }

        while (!maxh.empty()) {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }

        return ans;
    }
};
