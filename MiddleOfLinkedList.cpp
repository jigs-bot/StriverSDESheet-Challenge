//Striver SDE Sheet Challenge

Node *findMiddle(Node *head) {
    if(!head) return NULL;
    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next){
        slow= slow->next;
        fast = fast->next->next;
    }
    return slow;
}