/*判断B是否是A的子序列*/

void subline(LinkList A, LinkList B){
    LNode *p=A,*q=B,*pre=p;   //pre记住每躺比较中A链表的开始结点
    while(p&&q){
        if(p->data==q->data){
            p=p->next;
            q=q->next;
        }else{
            pre=pre->next;
            q=B;
        }
    if(q==NULL)        //B先结束
        return 1;
    else               //A先结束
        return 0;
    }
}