class MinStack {
private:
    stack<int> st;
    stack<int> min_st;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if (min_st.empty() || value <= min_st.top()) {
            min_st.push(value);
        }
    }
    
    void pop() {
        if (st.top() == min_st.top()) {
            min_st.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna