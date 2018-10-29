/*统计二叉树的高度, 宽度*/


int Depth(BtTree T):
    //if T.lchild==NULL&&T.rchild==NULL:
       // return 0
    int deep=0;
    if(BT){
        int lchilddeep=Depth(T->lchild);        // 由下向上
        int rchilddeep=Depth(T->rchild);
        deep = lchiddeep>=rchilddeep?lchilddeep+1:rchilddeep+1;
    }
    return deep;
    

int count[100];
int MAX=-1;

void FindWidth(BitNode T, int k){
    if(T==NULL) return;
    count[k]++;                    //k当前层数，count[k]当前层次的宽度
    if(MAX<count[k] MAX=count[k]);
    FindWidth(T->lchild,k+1);       //k+1: 下一层
    FindWidth(T->rchild,k+1);
}
