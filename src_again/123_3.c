
void postOrder(BtTree t){
    initStack(S);
    *p = t
    r=NULL;
    while(p!=NULL||!isEmpty(S)){
        //if(t->left)
        if(p)
            {Push(S, p);
            p=p->left;
            }
        else{
            GetTop(S, p);
            if(p->right&&p->right!=r){
                p=p->right;
                Push(S,p);
                p=p->left;
            }
            else{
                Pos(S, p);
                visit(p->data);
                r=p;
                p=NULL;
            }
        }
    }
}
