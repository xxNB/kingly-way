/*根据先序遍历与中序遍历确定链表二叉树*/


BiTree PreInCreat(ElmeType A[], ElemType B[], int l1, int h1, int l2, int h2){
    //l1=l1=1, h1=h2=n
    root = (BiTNode*)malloc(sizeof(BiTNode));
    root->data=A[l1];
    for(i=l2;B[i]!=root->data;i++);
    llen=i-l2;                        //左子树长度
    rlen=h2-i;                        //右子树长度
    if(llen)
      root->lchild=PreInCreat(A,B,l1+1,l1+llen,l2,l2+llen-1);
    else
      root->lchild=NULL;
    if(rlen)
      root->rchild=PreInCreat(A,B,h1-rlen+1,h1,h2-rlen+1,h2);
    else
      root->rchild=NULL;
    return root;

}
