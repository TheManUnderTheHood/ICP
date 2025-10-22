class MinStack {
public:
    stack<int> s;
    stack<int> mini;
    MinStack(){
    }
    void push(int val){
        s.push(val);
        if(mini.empty()) {
            mini.push(val);
        } 
        else {
            mini.push(min(val, mini.top()));
        }
    }
    void pop(){
        s.pop();
        mini.pop();
    }
    int top(){
        return s.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */