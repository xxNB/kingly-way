/*统计二叉树度为1，2，3的结点个数*/

void Count0(BTree bt)
    int i=0;
    if(bt){
        if(bt->lchild==NULL&&bt->rchild==NULL){
            i=1;
        }
        else{
            i=Count0(T->Lchild)+Count0(T->rchild);
        }
    }

int Count2(BTree bt)
    int i=0;
    if(bt){
        if(bt->lchild==NULL&&bt->rchild!=NULL)||(bt->lchild!=NULL&&bt->rchild==NULL){
            i=1+Count1(bt->lchild)+Count1(bt->Rchild);
        
        }
        else{
            i=Count1(bt->lchild)+Count1(bt->rchild);
        }
    }
