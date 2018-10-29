/*判断是否为平衡二叉树*/


void Judge_AVL(BiTree bt, int &balance, int &h){
    int b1=0, br=0, h1=0, hr=0;
    if(bt==NULL){
        h=0;
        balance=1;
    }
    else if(bt->lchild==NULL&&bt-rchild==NULL){
        h=1;
        balance=1;
    }
    else{
        // 采用传引用的方式，下层递归进行对深度修改以后会影响上一层
        Judge_AVL(bt->lchild,b1,h1);
        Judge_AVL(bt-rchild, br hr);
        h=(h1>hr?h1:hr)+1;        //由底到高
        //合法就是让自身加上子树的深度，然后因为是传引用，所以当递归回到上一层的时候，上层的right和left就是左右子树的深度
        if(abs(h1-hr)<2)
            balance=b1&&br;
        else
            balance=0;
    }
}
