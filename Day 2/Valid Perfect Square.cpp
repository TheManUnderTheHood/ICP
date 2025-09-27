class Solution {
public:
    bool isPerfectSquare(int num) {
        int s= 1, e=num;
        while(s<=e){
            int mid = s+(e-s)/2;
            if((long long)mid*mid == num){
                return true;
            }
            else if((long long)mid * mid < num){
                s= mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return false;
    }
};