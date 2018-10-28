/*判断是否为二叉排序树*/

KeyType predt=-32767;

int JudgeBST(BiTree bt){
    int b1, b2;
    if(bt=NULL)                     // 中序遍历结束，没有违规操作
        return 1;
    else{
        b1=JudgeBST(bt->lchild);
        if(b1==0||predt>=bt->data)
            return 0;
        predt=bt->data;
        b2=JudgeBST(bt->rchild);
        return b2;
    }
}


