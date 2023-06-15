#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
//LINK::: https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int> *ans = new Node<int>(0);
    Node<int> *result=ans;
    while(first && second){
        if(first->data >= second->data){
            ans->next=second;
            ans=ans->next;
            second=second->next;
        }
        else if(first->data < second->data){
            ans->next = first;
            ans=ans->next;
            first=first->next;
        }
    }
    while(first){
        ans->next=first;
        ans=ans->next;
        first=first->next;
    }
    while(second){
        ans->next=second;
        ans=ans->next;
        second=second->next;
    }
    return result->next;
}
