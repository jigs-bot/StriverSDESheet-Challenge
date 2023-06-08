bool isPalindrome(LinkedListNode<int> *head) {
    stack<int> s;
    LinkedListNode<int> *temp =head;
    while(temp){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(!s.empty()){
        if(temp->data != s.top())
            return false;
        temp=temp->next;
        s.pop();
    }
    return true;

}