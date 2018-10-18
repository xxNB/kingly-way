/*交换二叉树左右子树*/

void swap(BiTree b){
  if(b){
    swap(b->lchild);              //递归
    swap(b->rchild);              //递归
    temp=b->rchild;
    b->lchild=b->rchild;
    b->rchild=temp;
  }
}
