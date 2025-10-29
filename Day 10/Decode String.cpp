class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string ans = "";
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                temp += s[i];
            }
            else if(s[i] == '['){
                st.push(temp); 
                st.push(ans);
                temp = "";
                ans = "";
            }
            else if(s[i] == ']'){
                string inner = ans;
                ans = st.top(); 
                st.pop();
                int k = stoi(st.top()); 
                st.pop();
                string temp1 = "";
                while(k--){
                    temp1 += inner;
                }
                ans += temp1;
            }
            else{
                ans += s[i]; 
            }
        }
        return ans;
    }
};
