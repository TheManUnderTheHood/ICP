class Solution {
public:
    void clear(vector<vector<char>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        vector<vector<int>> dir = {{-1,0}, {1, 0}, {0, 1}, {0, -1}};
        for(auto&x : dir){
            clear(grid, i+x[0], j+x[1]);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j]=='1'){
                    ans++;
                    clear(grid, i, j);
                }
            }
        }
        return ans;
    }
};