#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

void helper(int n, vector<int> &ans) {
    if(n == 1){
        ans.push_back(1);
        return;
    }
    ans.push_back(n);
    for(int i = 1; i < n; i++){
        ans.push_back(i);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> ans;
    helper(n,ans);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}
