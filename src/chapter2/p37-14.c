/*归并俩单链表公共元素为另一条单链表*/

void Merge(LinkList A, LinkList B){          // A,B不改变
    LinkList C=(LinkList)malloc(sizeof(LNode));
    C->next=NULL;
    LNode *ra=A->next, *rb=B->next, *rc=C, *s;      // 申请一个指针作为  新申请结点的结点指针
    while(ra&&rb){
        if(ra->data<rb->data)
            ra=ra->next;
        else if (ra->data>rb->data)
            rb=rb->next;
        else{
            s=(LNode*)malloc(sizeof(LNode));         // s要重新申请!!!
            s->data=ra->data;
            rc->next=s;
            rc=rc->next;
            ra=ra->next;
            rb=rb->next;
        }
    }
}