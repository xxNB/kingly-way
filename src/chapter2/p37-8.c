
/*两个单链表的公共结点*/

bool Find_Common_node(LinkList &M, LinkList &N){
    int len1 = length(M), len2=length(N);
    LNode *m=M, *n=N;
    while(len1>len2){
        m=m->next;
        len1--;
    }
    while(len1<len2){
        n=n->next;
        len2--;
    }
    while(m!=NULL){
        if(m->next->data==n->next->data)
            return m;
        else
            {
                m=m->next;
                n=n->next;
            }
    }
    return false;
}