
void k(LNode *L){
    LNode *a=L->next, *b=L->next;
    int i;
    for(i=0; i<k; ++i){
        if(b==NULL)
            return 0;
        b=b->next;
    }
    while(b!=NULL){
        a=a->next;
        b=b->next;
    }
    return a;
}

int deQueue(LNode *rear, int &x){
    LNode *s;
    if(rear->next==rear)
        return 0;
    else{
        s=rear->next->next;
        rear->next->next=s->next;
        x=s->data;
        if(s==rear)
            rear=rear->next;
        free(s);
        return 1;
    }
}

