Node* removeKthNode(Node* head, int K)
{
    int count=1;
    Node *temp =head;
    Node *dummy = new Node();
    dummy->next = head;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    temp=dummy;
    K=count-K;
    while(K--){
        temp=temp->next;
    }
    temp->next =temp->next->next;

    return dummy->next;
}