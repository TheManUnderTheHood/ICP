class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> st;
    void push(int x) {
        st.push(x);
    }
    void solve1(stack<int> &st, int &ans){
        if(st.size()==1){
            ans=st.top();
            st.pop();
            return;
        }
        int top=st.top();
        st.pop();
        solve1(st, ans);
        st.push(top);
    }
    int pop() {
        int ans;
        solve1(st, ans);
        return ans;
    }
    void solve2(stack<int> &st, int &ans){
        if(st.size()==1){
            ans=st.top();
            return;
        }
        int top=st.top();
        st.pop();
        solve2(st, ans);
        st.push(top);
    }
    
    int peek() {
        int ans;
        solve2(st, ans);
        return ans;
    }
    
    bool empty() {
        return st.empty();
    }
};