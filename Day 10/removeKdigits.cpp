class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(char i : num){
            while(!st.empty() && st.top() > i && k > 0){
                st.pop();
                k--;
            }
            st.push(i);
        }

        while(k > 0 && !st.empty()){
            st.pop();
            k--;
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());

        while(ans.size() > 0 && ans[0] == '0'){
            ans.erase(0, 1);
        }

        if(ans == ""){
            return "0";
        }

        return ans;
    }
};
