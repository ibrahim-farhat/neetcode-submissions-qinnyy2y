class MinStack {
private:
    int *stack = NULL;
    int size = 0;
    std::stack<int> minstack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack = (int *) realloc(stack, sizeof(int) * ++size);
        stack[size - 1] = val;
        if (!minstack.empty() && minstack.top() < val) {
            minstack.push(minstack.top());
        } else {
            minstack.push(val);
        }
    }
    
    void pop() {
        stack = (int *) realloc(stack, sizeof(int) * --size);
        minstack.pop();
    }
    
    int top() {
        return stack[size - 1];
    }
    
    int getMin() {
        return minstack.top();
    }
};
