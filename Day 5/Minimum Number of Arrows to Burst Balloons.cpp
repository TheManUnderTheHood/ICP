class Solution {
public:
    static bool compare(vector<int> a, vector<int> b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int arrow = points[0][1];
        int ans=1;
        for(int i = 0; i < points.size(); i++){
            if(points[i][0]>arrow){
                ans++;
                arrow = points[i][1];
            }
        }
        return ans;
    }
};