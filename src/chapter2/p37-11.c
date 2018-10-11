/*就地拆分 线性表*/


//  新建了一个B， A是原地修改
void Split(LinkList &A){
    LinkList B=(LinkList)malloc(sizeof(LNode));
    B->next=NULL;
    LNode *p=A->next, *q, *ra=A;   // q 为 头插法时使用
    while(p!=NULL){
        ra->next=p; ra=p;
        p=p->next;
        q=p->next;
        p->next=B->next;
        B->next=p;
        p=q;
    }
    ra->next=NULL;
    return B;
}