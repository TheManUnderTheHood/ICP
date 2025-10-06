class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(auto &i : tokens){
            if(i=="+" || i=="-" || i=="*" || i=="/"){
                int b = stoi(st.top());
                st.pop();
                int a = stoi(st.top());
                st.pop();
                if(i=="+"){
                    st.push(to_string(a+b));
                }
                else if(i=="-"){
                    st.push(to_string(a-b));
                }
                else if(i=="*"){
                    st.push(to_string(a*b));
                }
                else{
                    st.push(to_string(a/b));
                }
            }
            else{
                st.push(i);
            }
        }
        return stoi(st.top());
    }
};