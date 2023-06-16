#include <bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    stack<int> s1;
    stack<int> s2;
    
    public:
    Queue() {
        // Initialize your data structure here.
        
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        s2.push(val); 

    }

    int deQueue() {
        // Implement the dequeue() function.
        int res;
        if(s2.empty()) return -1;
        else{
            while(!s2.empty()){
            int x= s2.top();s2.pop();
            s1.push(x);
            }
            res=s1.top();s1.pop();
            while(!s1.empty()){
                int x= s1.top();s1.pop();
                s2.push(x);
            }
        }
        return res;
    }

    int peek() {
        
        int res;
        if(s2.empty()) return -1;
        else{
            while(!s2.empty()){
            int x= s2.top();s2.pop();
            s1.push(x);
            }
            res=s1.top();
            while(!s1.empty()){
                int x= s1.top();s1.pop();
                s2.push(x);
            }
        }
        return res;

    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        if(s2.size()>0) return false;
        return true;
    }
};