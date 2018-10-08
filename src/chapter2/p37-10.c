/*单链表分割奇偶*/

LinkList DisCreat_1(LinkList &A){
    i=0;
    B=(LinkList)malloc(sizeof(LNode));
    B->next=NULL;
    LNode *ra=A,*rb=B;
    p=A->next;
    A->next=NULL;      //置空新的A表
    while(p!=NULL){
        i++;
        if(i%2==0){
            rb->next=p;
            rb=p;             //rb指向新的为结点
        }
        else{
            ra->next=p;
            ra=p;
        }
        p=p->next;     //将p恢复为指向新的待处理结点
    }
    ra->next=NULL;
    rb->next=NULL;
    return B;
}