/*二叉树的宽度*/

typedef struct{
    BiTree data[MaxSize];
    int level[MaxSize];
    int front, rear;
}Qu;

int BTWidth(BiTree b){
    BiTree p;
    int k, max, i, n;
    Qu.front=Qu.rear=-1;
    Qu.rear++;
    Qu.data[Qu.rear]=b;
    Qu.level[Qu.rear]=1;
    while(Qu.front<Qu.rear){
        Qu.front++;
        p=Qu.data[Qu.front];
        k=Qu.level[Qu.front];
        if(p->lchild!=NULL){
            Qu.rear++;
            Qu.data[Qu.rear]=p->lchild;
            Qu.level[Qu.rear]=k+1;
        }
        if(p->rchild!=NULL){
        Qu.rear++;
        Qu.data[Qu.rear]=p->rchild;
        Qu.level[Qu.rear]=k+1;
        }
    }
    max=0; i=0;
    k=1;
    while(i<Qu.rear){
        n=0;
        while(i<Qu.rear&&Qu.level[i]==k){
            n++;
            i++;
        }
        k=Qu.level[i];
        if(n>max)   max=n;
    }
    return max;
}