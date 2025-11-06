#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int min_rice=a-b;
        int max_rice=a+b;
        int packet_min=c-d;
        int packet_max=c+d;
        int found = 0;
        for(int i=n*min_rice; i<=n*max_rice; i++){
            if(i>=packet_min && i<=packet_max){
                found = 1;
                break;
            }
        }
        if(found){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
