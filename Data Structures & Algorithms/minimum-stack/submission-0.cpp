class MinStack {
private:
    int *stack = NULL;
    int size = 0;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack = (int *) realloc(stack, sizeof(int) * ++size);
        stack[size - 1] = val;
    }
    
    void pop() {
        stack = (int *) realloc(stack, sizeof(int) * --size);
    }
    
    int top() {
        return stack[size - 1];
    }
    
    int getMin() {
        int min = stack[0]; 
        for (int i = 1; i < size; i++) {
            if (stack[i] < min) min = stack[i];
        }
        return min;
    }
};
