class Solution {
public:
    void helper(int start, vector<vector<int>> &ans, vector<int> &curr, int n, int k){
        if(curr.size() == k){
            ans.push_back(curr);
            return;
        }

        for(int i = start; i<=n; i++){
            curr.push_back(i);
            helper(i+1, ans, curr, n, k);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(1, ans, curr, n, k);
        return ans;
    }
};