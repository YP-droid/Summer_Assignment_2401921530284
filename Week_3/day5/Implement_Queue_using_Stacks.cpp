class MyQueue {
public:
stack<int> s1; //i/p
stack<int> s2; //o/p this has the queue like order
    
    void input_to_output()
    {
        //only push to s2 if it is empty
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());s1.pop();
            }
        }
    }

    MyQueue() {
        
    }
    //s1 holds all i/p
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        input_to_output();
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {
        input_to_output();
        int x = s2.top();
        return x;
    }
    
    bool empty() {
        return s1.empty() and s2.empty();    
    }
};


/*

3 stk approach

class MyQueue {
public:
stack<int>s1; 
stack<int>s2; //intermediate stack
stack<int>s3; //store element in queue like order
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        //directly push to s3
        if(s3.empty())
        {
            while(!s1.empty())
            {
                s3.push(s1.top());s1.pop();
            }
        }
        //s3 has some elements
        else
        {
            //empty s3 to s2
            while(!s3.empty())
            {
                s2.push(s3.top());s3.pop();
            }
            
            //s1 to s2
            while(!s1.empty())
            {
                s2.push(s1.top());s1.pop();
            }

            //s2 to s3 (correct order)
            while(!s2.empty())
            {
                s3.push(s2.top());s2.pop();
            }
        }
    }
    
    int pop() {
        int x = s3.top(); //s2 elements are taken out like a queue
        s3.pop();
        return x;
    }
    
    int peek() {
        return s3.top();
    }
    
    bool empty() {
        return s3.empty();
    }
};

*/