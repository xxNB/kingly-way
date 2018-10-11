
/*递增输出单链表*/

void Print_Biger(LinkList &head){
    LNode *r, *p, *pre;
    while(head->next!=NULL){
        p=head->next;
        pre=head;
        while(p->next!=NULL){                      //每次循环找出最小值结点的前驱
            if(p->next->data<pre->next->data)
                pre=p;
            p=p->next;
        }
        print(pre->next->data);
        r=pre->next;
        pre->next=r->next;
        free(r);     // 删除最小值结点
    }
    free(head);       // 删干净为止
}