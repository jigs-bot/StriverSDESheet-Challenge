Node *rotate(Node *head, int k) {
     int count=1;
     Node *temp = head;
     Node *ans;
     while(temp->next){
          count++;
          temp=temp->next;
     }
     temp->next=head;
     k=k%count;
     k=count-k;
     while(k--){
       temp=temp->next;   
          
     }
     head=temp->next;temp->next=NULL;
     return head;


}