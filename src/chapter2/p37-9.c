
/*递增输出单链表*/

void Min_Delete(LinkList &head){
    while(head->next!=NULL){      //循环到仅剩头结点
        pre=head;
        p=pre->next;
        while(p->next!=NULL){
            if(p->next->data<pre->next->data)
                {pre=p;  }        //记住当前最小值结点的前驱
            p=p->next;
        }
        print(pre->next->data);
        u=pre->next;             //删除元素值最小结点
        pre->next=u->next;
        free(u);
    }
    free(head);
}