void Del_X-1(LinkList &L, ElemType x){
    LNode *p=L->next, *pre=L, *q;
    while(p!=NULL){
        if(p->data==x){
            q=p;
            p=p.next;
            pre.next=p;
            free(q);
        }
        else{
            pre=p;
            p=p->next;
        }
    }
}