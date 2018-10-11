/*删除带头结点单链表L中值x的点*/

void Del_link_2(LinkList &L, ElemType x){
    LNode *p=L->next, *pre=L, *q     // q指针便于释放结点空间
    if(L=NULL)
        return;
    while(p!=NULL){
    if(p->data==x){
        q=p;
        p=p->next;
        pre->next=p;
        free(q);
    }
    else{
        p=p->next;
        pre.next=p;
    }
}
}