class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN, sum=0;
        for(int i=0; i<nums.size(); i++){
            maxsum=max(maxsum, sum+nums[i]);
            sum=max(0,sum+nums[i]);
        }
        return maxsum;
    }
};