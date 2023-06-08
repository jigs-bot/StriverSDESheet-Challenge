//LINK :https://www.codingninjas.com/codestudio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge&leftPanelTab=0

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *f=firstHead;
    Node *s=secondHead;
    int f_c=1,s_c=1;
    while(f->next!=NULL){
        f_c++;
        f=f->next;
    }
    while(s->next!=NULL){
        s_c++;
        s=s->next;
    }
    int diff = abs(f_c - s_c);
    int maxc;
    if(f_c>s_c){
        maxc=f_c;
        while(diff--){
            firstHead=firstHead->next;
        }
    }
    else{
        maxc=s_c;
        while(diff--){
            secondHead=secondHead->next;
        }
    }
    while(firstHead != secondHead){
        firstHead=firstHead->next;
        secondHead=secondHead->next;
    }
    if(firstHead == secondHead)
        return firstHead;
    


    return NULL;
}