class Solution {
public:
    int first(vector<int> arr, int key){
        int f=0;
        int l=arr.size()-1;
        int ans=-1;
        while(f<=l){
            int mid=f+((l-f)/2);
            if (key==arr[mid]){
                ans=mid;
                l=mid-1;
            }
            else if (key<arr[mid]){
                l=mid-1;
            }
            else{
                f=mid+1;
            }
        }
        return ans; 
    }
    int last(vector<int> arr, int key){
        int f=0;
        int l=arr.size()-1;
        int ans=-1;
        while(f<=l){
            int mid=f+((l-f)/2);
            if (key==arr[mid]){
                ans=mid;
                f=mid+1;
            }
            else if (key<arr[mid]){
                l=mid-1;
            }
            else{
                f=mid+1;
            }
        }
        return ans; 
    }
    
    vector<int> searchRange(vector<int>& arr, int key) {
        vector<int>ans;
        ans.push_back(first(arr,key));
        ans.push_back(last(arr,key));
        return ans;
    }
};