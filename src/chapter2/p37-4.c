LinkList Delete_Min(LinkList &L){
    LNode *pre = L, *p=pre->next;
    LNode *minpre=pre, *minp=p;    //保存最小值结点及其前驱
    while(p!=NULL){
        if(p->data<minp->data){
            minp=p;
            minpre=pre;
        }
        pre=p;
        p=p->next;
    }
    minpre->next=minp->next;
    free(minp);
    return L;
}