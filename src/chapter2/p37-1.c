/*删除不带头结点单链表L中的值为x结点*/

void Del_link_1(LinkList &L, ElemType x){
    LNode *p;
    if(L==NULL)
        return
    if(L->data==x){
        p=L;
        L=L->next;
        free(p);
        Del_link_1(L);
    }
    else
        Del_link_1(L=L->next);
}
