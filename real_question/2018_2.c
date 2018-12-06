
void delLinkNode(LinkNode &L){
    NodeList *pr=L, *nr=L->next;
    while(nr->next!=NULL){
        if(pr->data!=nr->data)
            pr->next=nr;
            pr=nr;
        nr=nr->next;
    }
    return L;
}
