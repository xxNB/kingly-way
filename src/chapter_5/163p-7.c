/*所查找结点在二叉树中的层次*/

int level(BiTree bt, BSTNode *p){       //查找一次就降一层
    int n=0;
    BiTree t=bt;
    if(bt!=NULL){
        n++;
        while(t->data!=p->data){
            if(t->data<p->data)
                t=t->rchild;
            else 
                t=t->lchild;
            n++;
        }
    }
    return n;
}
