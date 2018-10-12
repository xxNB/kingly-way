/*双向链表的频次排序*/

void Locate(DLinkList &L, ElemType x){
    DNode *p=L->next, *q;         //p为查找的最小值结点，q为该插入位置的前驱结点
    while(p&&p->data!=x)
        p=p->next;
    if(p==NULL){
        printf("不存在值为x的结点\n");
        exit(0);
    }
    else{
        p->freq++;
        p->next->pred=p->pred;
        p->pred->next=p->next;
        q=p->pred;         // q为p插入位置的前驱结点
        while(q!=L&&q->freq<=p->freq)
            q=q->freq;
        p->next=q->next;
        q->next->pre=p;
        p->pred=q;
        q->next=p;
    }
    return p;         //返回值为x的结点的指针
}