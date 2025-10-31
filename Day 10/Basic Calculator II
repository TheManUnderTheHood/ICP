#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<string> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                continue;
            }
            if(isdigit(s[i])){
                string temp = "";
                while(i<s.size() && isdigit(s[i])){
                    temp += s[i++];
                }
                i--;
                st.push(temp);
            }
            else if(s[i] == '+' || s[i] == '-'){
                st.push(string(1, s[i]));
            }
            else if(s[i] == '*'){
                int top = stoi(st.top());
                st.pop();
                i++;
                while(i < s.size() && s[i] == ' '){
                    i++;
                }
                string temp = "";
                while(i < s.size() && isdigit(s[i])){
                    temp += s[i++];
                }
                i--;
                int ans = top * stoi(temp);
                st.push(to_string(ans));
            }
            else if(s[i] == '/'){
                int top = stoi(st.top());
                st.pop();
                i++;
                while(i < s.size() && s[i] == ' '){
                    i++;
                }
                string temp = "";
                while(i < s.size() && isdigit(s[i])){
                    temp += s[i++];
                }
                i--;
                int ans = top/stoi(temp);
                st.push(to_string(ans));
            }
        }

        vector<string> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        int ans = 0;
        for(int i = 0; i < v.size();){
            ans = stoi(v[i++]);
            while(i < v.size()){
                if(v[i] == "+"){
                    i++;
                    ans += stoi(v[i++]);
                } 
                else if(v[i] == "-"){
                    i++;
                    ans -= stoi(v[i++]);
                } 
                else{
                    i++;
                }
            }
        }

        return ans;
    }
};
