/*单链表就地翻转*/

void Reverse(LinkList &L){
    LNode *p ,*r;     //  r保存剩下需要翻转的链表
    p=L->next;
    L->next=NULL;
    while(p!=NULL){
        r=p->next;
        p->next=L->next;
        L->next=p;
        p=r
    }
    return L;
}