class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> map;
        for(char i : s){
            map[i]++;
        }
        vector<bool> visited(26, false);
        stack<char> st;

        for(char i : s){
            map[i]--;
            if(visited[i-'a']){
                continue;
            }
            else{
                while(!st.empty() && st.top()>i && map[st.top()]>0){
                    visited[st.top()-'a'] = false;    
                    st.pop();
                }
                st.push(i);
                visited[i-'a'] = true;    
            }
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};