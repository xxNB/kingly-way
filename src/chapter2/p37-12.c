/*删除相同元素*/

void Del_dul(LinkList &L){
    LNode *p=L->next, *q;
    if(p=NULL)
        return;
    while(p->next!=NULL){
        q=p->next;
        if(p->data!=q->data){
            p->next=q->next;
            free(q);
        }
        else
            p=p->next;
    }