/*带头结点的单链表删除介于给定俩值的结点*/

void Del_Link_4(LinkList &L, ElemType s, ElemType t){
    LNode *q, *p=L->next, *pre=L;
    while(p!=NULL){           //p->next可以为null
        if(p->data>s&&p->data<t){
            q=p;
            p=p->next;
            pre->next=p;
            free(q)
        }
        else{
        pre=pre->next;
        p=p->next;          // 推进 pre and p
        }
    }
}