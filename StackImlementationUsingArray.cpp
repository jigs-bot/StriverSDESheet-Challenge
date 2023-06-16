#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int *st;
    int size;
    int top_index;int c;
public:
    
    Stack(int capacity) {
        // Write your code here.
      st= new int[capacity];
      size=0;
      top_index=-1;
      
      c=capacity;
    }

    void push(int num) {
        // Write your code here.
        if(isFull()) return;
        st[++top_index]=num;
    }

    int pop() {
        // Write your code here.
        if(isEmpty()) return -1;
        int res=st[top_index--];
        return res;

    }
    
    int top() {
        // Write your code here.
        if(isEmpty()) return -1;
        return st[top_index];
    }
    
    int isEmpty() {
        // Write your code here.
        return top_index==-1;
    }
    
    int isFull() {
        // Write your code here.
        return (top_index-1)==c;
    }
    
};