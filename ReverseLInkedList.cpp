LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head || !head->next)
        return head;
    LinkedListNode<int> *node = reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return node;
    
}