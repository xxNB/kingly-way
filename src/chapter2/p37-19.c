/*按递增顺序输出并删除循环单链表*/


void Print(LinkList &L){
    LNode *minp, *minpre, *p, *pre;
    while(L->next!=NULL){    
    p=L->next, pre=L;
    minp=p, minpre=pre;
    while(p!=L){
        if(p->data<minp->data){       // 第一次必然不满足，pre,p向前推
            minp=p;
            minpre=pre;
        }
        pre=p;
        p=p->next;
    }
    printf("%d", minp->data);
    minpre->next=minp->next;
    free(minp);
}
free(L);     // 释放开始的头结点
}