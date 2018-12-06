
void Inverse(Node *&h){
    Node *p=h->next;
    Node *tr;
    h->next=NULL;
    while(p!=NULL){
    tr=p->next;
    p->next=h->next;
    h->next=p;
    p=tr;
    }
    return h;
}
