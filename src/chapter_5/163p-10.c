/*从大到小输出二叉排序树中所有值不小于k的关键字*/

// 右根左
void OutPut(BSTNode *bt, KeyType k)         //先递归遍历右子树，再递归遍历左子树
    if(bt==NULL)
        return ;
    if(bt->richild!=NULL)
        OutPut(bt->rchild,k);
    if(bt->data>=k)
       printf("%d", bt->data);
    if(bt->lchild!=NULL)
      OutPut(bt->lchild,k);


