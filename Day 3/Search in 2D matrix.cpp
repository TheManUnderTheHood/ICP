class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0, e = matrix.size()*matrix[0].size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            int ele = matrix[mid/matrix[0].size()][mid%matrix[0].size()];
            if(ele == target){
                return true;
            }
            else if(target < ele){
                e= mid -1;
            }
            else{
                s = mid +1;
            }
        }
        return false;
    }
};