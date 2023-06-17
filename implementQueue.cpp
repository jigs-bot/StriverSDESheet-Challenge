//using queue data structure

#include <bits/stdc++.h> 
class Queue {
public:
    queue<int>q;
    Queue() {
        // Implement the Constructor
        // queue<int> q;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return q.empty();
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        q.push(data);
    }

    int dequeue() {
        // Implement the dequeue() function
        if(q.empty()) return -1;
        int x=q.front();
        q.pop();
        return x;
    }

    int front() {
        // Implement the front() function
        if(q.empty()) return -1;
        return q.front();
    }
};