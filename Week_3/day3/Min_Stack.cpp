class MinStack {
public:
stack<int>stk;
stack<int>Minstk;
    MinStack() {
        
    }
    
    void push(int value) {
        stk.push(value);
        if(Minstk.empty() || value<=Minstk.top())Minstk.push(value);
    }
    //if element to be popped is curr min, update Minstk
    void pop() {
        if(stk.top()==Minstk.top())Minstk.pop();
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return Minstk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */