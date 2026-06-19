class MinStack {
public:
    stack<pair<int, int>> mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mini.empty()){
            mini.push({val, val});
        }
        else{
            int minS=min(val, mini.top().second);
            mini.push({val, minS});
        }
    }
    
    void pop() {
        mini.pop();
    }
    
    int top() {
        return mini.top().first;
    }
    
    int getMin() {
        return mini.top().second;
    }
};
