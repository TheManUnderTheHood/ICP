class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(st.empty() || s[i]!=st.top().first){
                st.push({s[i], 1});
            }
            else{
                st.push({s[i], st.top().second+1});
            }
            if(st.top().second==k){
                int count =k;
                while(count--){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ans += st.top().first;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
