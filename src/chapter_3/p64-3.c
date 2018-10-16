/*判断字符是否中心对称*/

bool Judge_2(LinkList L){
    LNode *p=L->next;
    int i;
    char s[n/2];   // s为字符栈 !
    for(i=0;i<n/2;i++){
        s[i]=p->data;
        p=p->next;
    }
    i--;
    if(n%2==1)
        p=p->next;
    while(p!=NULL&&s[i]==p->data){
        i--;
        p->next;
    }
    // i循环到头
    if(i==-1)
        return 1;
    else
        return 0;
        
}

