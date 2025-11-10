#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
bool helper(vector<int> &ans, int a, int b){
    if(a==b){
        ans.push_back(b);
        return true;
    }
    ans.push_back(b);
    if(b<a){
        return false;
    }
    if(b%2==0){
        return helper(ans, a, b/2);
    }
    else if(b%10==1){
        return helper(ans, a, b/10);
    }
    else{
        return false;
    }
}
int main(){
    int a, b;
    cin>>a>>b;
    vector<int> ans;
    if(helper(ans, a,b)){
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        reverse(ans.begin(), ans.end());
        for(int i : ans){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}
