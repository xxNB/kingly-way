/*增加父母指针，输出节点到根节点路径*/

typedef struct BTNode{
    char data;
    struct BTNode *parent;
    struct BTNode *lchild;
    struct BTNode *rchild;
}BTNode;

// 给parent赋值

void triBtree(BTNode *p, BTNode *q){
    if(p!=NULL){                // 当p为根节点时，q应该为null
        p->parent=q;
        q=p;
        triBtree(p->lchild, q);
        triBtree(p->rchild, q);
    }
}

// 打印路径

void printPath(BTNode *p){
    while(p!=NULL){
        cout<<p->data<<" "<<endl;
        p=p->parent;
    }

}

void allPath(BTNode *p){
    if(p!=NULL){
        printPath(p);
        allPath(p->lchild);
        allPath(p->rchild);
    }

}