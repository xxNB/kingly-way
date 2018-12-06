
void colYeziNode(LinkList &t){
    NodeList stack[];
    Queue q;
    NodeList now = t;
    EnQueue(t);
    while(q){
        t = DeQueue(t);
        if t->lchild==NULL&&t->rchild==NULL
            Push(stack, t);
        else{
            EnQueue(q, t->left);
            EenQueue(q, t->right);
        }
    }
    return stack;
}

NodeList* makeNode(){
    yeziNode = colYeziNode(LinkLisr &t);
    rt = (LNode*)malloc(sizeof(LNode));
    //rt->next=NULL;
    NodeList *p = rt->next;
    while(yeziNode){
        node = Pop(yeziNode);
        p->next=node;
        p = node;
    }
    return rt->next;
}
