/*求BST里最小关键字结点*/


keyType MinKey(BSTNode *bt){
    while(bt->rchild!=NULL)
        bt=bt->lchild;
    return bt->data;
  }

KeyType MaxKey(BSTNode *bt){
    while(bt->rchild!=NULL)
        bt=bt->rchild;  
    return bt->data;

}
