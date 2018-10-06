/*单链表就地翻转*/
LinkList Reverse_1(LinkList L){    
    LNode *p, *r; 
    p=L->next;
    p->next=NULL;
    while(p!=NULL){
        r=p->next;
        p->next=L->next;
        L->next=p;
        p=r;
    }
    return L;
}