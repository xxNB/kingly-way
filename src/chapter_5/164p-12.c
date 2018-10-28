/*查找第k小的元素*/

BSTNode *Search_Small(BSTNode*t, int k){
    if(k<1||k>t->count)return NULL;
    if(t->lchild==NULL){
        if(k==1) return t;
        else return Search_Small(t->rchild, k-1);
    }
    else{
        if(t->lchild->count==k-1) return t;
        if(t->lchild->count>k-1) return Search_Small(t->lchild,k);
        if(t->lchild->count<k-1)
            return Search_Small(t->rchild, k-(t->lchild->count+1));
    }
}
