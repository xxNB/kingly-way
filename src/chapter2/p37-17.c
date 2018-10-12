/*循环双链表是否对称*/

int Del_5(LinkList &L){
    LNode *la=L->next, *lb=L->pre;
    while(la!=lb&&q->next!=p){          // 循环跳出条件
        if(la->data==lb->data){
            la=la->next;
            lb=lb->pre;
        }
        else
            return 0;
    }
    return 1;
}