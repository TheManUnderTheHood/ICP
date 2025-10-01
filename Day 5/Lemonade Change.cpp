class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5){
            return false;
        }
        unordered_map<int,int> cash;
        for(int &i : bills){
            cash[i]++;
            if(i==10){
                if(cash[5]>0){
                    cash[5]--;
                }
                else{
                    return false;
                }
            }
            if(i==20){
                int count = 15;
                while(count>0){
                    if(cash[10]>0 && count>10){
                        cash[10]--;
                        count-=10;
                    }
                    else if(cash[5]>0 && count>0){
                        cash[5]--;
                        count-=5;
                    }
                    else{
                        return false;
                    }

                }
            }
        }
        return true;
    }
};