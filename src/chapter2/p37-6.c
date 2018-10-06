
void Sort(LinkList &L){
    LNode *p=L->next, *pre;
    LNode *r=p->next;
    p->next= NULL;
    p=r;            
    while(p!=NULL){
        r=p->next;         // 保存*p的后继结点指针
        pre=L;
        while(pre->next!=NULL&&pre->next->data<p->data)
            pre=pre->next;     //在有序表中查找插入位置
        p->next=pre->next;   // 将*p插入到*pre之后
        pre->next=p;
        p=r;                    
    }  
}