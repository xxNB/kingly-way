/*带头结点的单链表删除介于给定俩值的结点*/

void RangeDelete(LinkList &L, int min, int max){
    LNode *pr = L, *p =L->next;    //p是检测指针, pr 是其前驱
    while(p!=NULL)
    {
        if(p->data>min&&p->data<max){
            pr->next=p->next;
            free(p);
            p=pr->next;
        }
        else{
            pr=p;
            p=p->next;
        }
    }
}