class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1=0,s2=0;
        int l1=m-1,l2=n-1;
        int newa=0;
        vector<int> temp(nums1);
        while(s1<=l1 && s2<=l2){
            if(temp[s1]<nums2[s2]){
                nums1[newa++]=temp[s1++];
            }
            else{
                nums1[newa++]=nums2[s2++];
            }
        }
        while(s1<=l1){
            nums1[newa++]=temp[s1++];
        }
        while(s2<=l2){
            nums1[newa++]=nums2[s2++];
        }
    }
};