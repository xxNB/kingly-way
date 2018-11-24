/*判断是否为平衡二叉树*/


void Judge_AVL(BiTree *bt){
    if(pRoot==NULL)
        return true;
    int nLeftDepth = TreeDepth(pRoot->left);
    int nRightDepth = TreeDepth(pRoot->right);
    int diff = nRightDepth-nLeftDepth;
    if(diff>1||diff<-1)
        return false;
    return Judge_AVL(pRoot->left)&&Judge_AVL(pRoot->right);
}

int TreeDepth(BiTreeNode* pRoot){
    if(pRoot==NULL)
        return 0;
    int nLeftDepth = TreeDepth(pRoot->left);
    int nRightDepth = TreeDepth(pRoot->right);

    return (nLeftDepth>nRightDepth)?(nLeftDepth+1):(nRightDepth+1);
}
