/*二叉树带权计算*/

int WPL(BiTree root){
    return wpl_PreOrder(root, 0);
}

int wpl_PreOrder(BiTree root, int deep){
    static int wpl=0;
    if(root->right==NULL&&root->rchild==NULL){
        wpl+=deep*root->weight;
    if(root->lchild!=NULL)
        wpl_PreOrder(root->lchild, deep+1);
    if(root->rchild!=NULL)
        wpl_PreOrder(root->rchild, deep+1);
    return wpl;
    }
}
