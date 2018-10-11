/*排序单链表 递增*/

void Sort_link(LinkList &L){
    LNode *p=L->next, *pre;
    LNode *r=p->next;       // 保存后继结点，方便接下来的操作
    p->next=NULL;           //构造只含一个数据结点的有序表
    p=r;      
    while(p!=NULL){
        r=p->next;   //保存*p的后继结点指针
        pre=L;       //p前驱结点声明为pre, 只含一个数据结点的有序表为 pre
        while(pre->next!=NULL&&pre->next->data<p->data){    // p的data值大于pre->next的data值就继续 推进pre
            pre=pre->next;
        }
        p->next=pre->next;
        pre->next=p;
        p=r;    //扫描原单链表剩下结点
    }
}