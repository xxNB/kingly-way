
void cenci(BiTree *t){
    initStack(S);
    initQueue(Q)
    EnQueue(Q,t);
    while(!isEmpty(Q)){
        DeQueue(Q, n);
        Push(S, n);
        if n->left
            EnQueue(Q, n->left);
        if n->right
            EnQueue(Q, n->right);
    }
    if(!isEmpty(S)){
        Pop(S, r);
        printf("%d", r->data);
    }

}
