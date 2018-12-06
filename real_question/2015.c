
void enQueue(node *R, ElemType x){
    node *p=(node*)malloc(sizeof(node));
    p->data=x;
    p->next=R->next;
    R->next=p;
    R=p;
}


void deQueue(ndoe *R, ElemType &s){
  mode *pre=R->next, *pr = pre->next; 
  while(pr->next!=R){
      pr=pr->next;
      pre=pre->next;
  }
  pre->next=R;
  free(pr);
}
