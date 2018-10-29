/*交换每个结点俩个子女*/

void SwapLRtreePre(BiTNode* T){
    BiTNode* temp;
    if(T==NULL){
        return;
    }
    temp=T->lchild;
    T->lchild=T->rchild;
    T->rchild=temp;
    SwapLRtreePre(T->lchild);
    SwapLRtreePre(T->rchild);
}
