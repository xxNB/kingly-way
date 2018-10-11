/*单链表分割奇偶*/

LinkList DisCreat_1(LinkList &A){
    int i=1;
    LinkList B=(LinkList)malloc(sizeof(LNode));  //新 偶链表B
    LNode *ra=A, *rb=B;
    rb->next=NULL;
    p=ra->next;
    A->next=NULL;   //新 奇链表A

    while(p!=NULL){
        if(i%2==0){
            rb->next=p;
            rb=p;
        }
        else{
            ra->next=p;
            ra=p;
        }
        p=p->next;
        i++;
    }
    ra->next=NULL;
    rb->next=NULL;
}