/*二叉树拼单链表*/

LinkedList head, pre=NULL;
LinkedList InOrder(BiTree bt){            //采用中序遍历 左根右
    if(bt){
        InOrder(bt->lchild);
        if(bt->lchild==NULL&&bt->rchild==NULL)
            if(pre=NULL){
                head=bt;          //  第一个叶结点
                pre=bt;
            }
            else{
                pre->rchild=bt;         //  后序结点接在pre->rchild后面 
                pre=bt;
        } 
      InOrder(bt-rchild);
      pre->rchild=NULL;
    }

}
