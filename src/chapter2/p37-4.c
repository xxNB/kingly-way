/*单链表删除最小值结点*/

void Del_min(LinkList &L){
    LNode *pre=L,*p=pre->next;
    LNode *minpre=pre, *minp=p;     //保存最小值结点及其前驱，方便最后删除
    while(p!=NULL){
        if(p->data<minp->data){     // 第一轮p和minp重合，一定不满足，p,pre向前推进
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