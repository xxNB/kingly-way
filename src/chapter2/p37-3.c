/*倒序打印单链表*/

void Print_L(LinkList &L){
    // LNode *p;
    if(L->next!=NULL){
        Print_L(L->next);}  // 递之
    print(L->data);       // 归之
}