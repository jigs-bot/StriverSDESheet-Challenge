// #include <bits/stdc++.h> 
// class Stack {
// 	// Define the data members.
//     deque<int>q;

//    public:
//     Stack() {
//         // Implement the Constructor.
//     }

//     /*----------------- Public Functions of Stack -----------------*/

//     int getSize() {
//         // Implement the getSize() function.
//         return q.size();
//     }

//     bool isEmpty() {
//         // Implement the isEmpty() function.
//         return (q.size() == 0);
//     }

//     void push(int element) {
//         // Implement the push() function.
//         q.push_back(element);
//     }

//     int pop() {
//         // Implement the pop() function.
//         if(q.size()==0) return -1;
//         int res = q.back();
//         q.pop_back();
//         return res;
//     }

//     int top() {
//         // Implement the top() function.
//         return q.back();
//     }
// };


#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
    private:
        queue<int> q1;
        queue<int> q2;
        int length;

    public:
    Stack() {
        // Implement the Constructor.
        length = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return length;
    }

    bool isEmpty() {
        return length == 0;
    }

    void push(int element) {
        q2.push(element);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
        length++;
}

    int pop() {
        if(!q1.empty()){
            int value = q1.front();
            q1.pop();
            length--;
            return value;
        }
        return -1;
    }

    int top() {
        if(!q1.empty()){
            return q1.front();
        }
        return -1;
    }
};