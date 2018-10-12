/*拼接俩循环单链表*/

void merge_2(LNode h1, LNode h2){
    LNode *r1， *r2;     // r1为h1尾结点, r2为h2的尾结点
    r1=h1;
    r2=h2;
    while (r1->next!=h1){      // 当r1->next为h1时跳出循环
        r1=r1->next;
    }
    while(r2->next!=h2){
        r2=r2->next;
    }
    r1->next=h2;
    r2->next=h1;
    return
}