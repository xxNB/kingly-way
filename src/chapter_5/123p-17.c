/*相似二叉树*/

int similar(BiTree T1, BiTree T2){
    int lefts, rights;
    if(T1==NULL&&T2=NULL){
        return 1;
    }
    else if(T1==NULL||T2==NULL)         // 只有一个子结点为NULL
        return 0;
    else{
        lefts=similar(T1->lchild, T2->lchild);
        rights=similar(T1->rchild, T2->rchild);
        return lefts&&rights;
    }

}
