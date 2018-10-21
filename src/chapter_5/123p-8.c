/*计算二叉树的双分支结点个数*/

int DsonNodes(BiTree b){
  if(b==NULL)
    return 0;
  else if(b->lchild!=NULL&&b->rchild!=NULL)
    return DsonNodes(b->lchild)+DsonNodes(b->rchild)+1;     // 双分支
  else
    return DsonNodes(b->lchild)+DsonNodes(b->rchild); //   单分支继续递归，但不+1
}


