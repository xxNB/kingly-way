/*二叉树拼单链表*/

LinkedList head, pre=NULL;
LinkedList InOrder(BiTree bt){
    if(bt){
        InOrder(bt->lchild);
        if(bt->lchild==NULL&&bt->rchild==NULL)
            if(pre=NULL){
                head=bt;
                pre=bt;
            }
            else{
                pre->rchild=bt;
                pre=bt;
        } 
      InOrder(bt-rchild);
      pre->rchild=NULL;
    }

}
