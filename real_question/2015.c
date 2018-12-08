
void enQueue(node *R, Elemtype x){
    if(R->next=R){
        s = (node*)malloc(sizeof(*node));
        s->data=x;
        R->next=s;
        R=s; 
    }
    else{
        s = (node*)malloc(sizeof(*node));
        s->data=x;
        s->next=R->next;
        R=s;
    }
  
}

void deQueue(node *R, ElemType &x){
    node *p;
    if(R->next=R){
        return NULL;  
    }
    else{
        p = R->next;
        x=p->data;
        R->next=p->next;
        free(p);
    }

}
