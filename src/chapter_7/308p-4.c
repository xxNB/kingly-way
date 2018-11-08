/*对不带表头结点对单链表进行简单对选择排序*/

void selcetSort(LinkedList& L){
    LinkNode *h=L, *p, *q, *r, *s;
    L=NULL;
    while(h!=NULL){             //h始终记录着最初L的位置
        p=s=h; q=r=NULL;
        while(p!=NULL){
            if(p->data>s->data){s=p;r=q;}
            q=p;p=p->link;
        }
        if(s=h)
            h=h->link;
        else
            r->link=s->link;
        s->link=L;L=s;
    
    }

}
