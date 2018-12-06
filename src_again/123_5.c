
int BtDepth(BiTree t){
    int front=-1, rear=-1;
    int level=0, last=0;
    TreeNode Q[MaxSize];
    Q[++rear]=t;
    while(Q){
        n = Q[front++];
        if n->left
            Q[++rear]=n->left;
        if n->right
            Q[++rear]=n->right;
        if front==last:
            level++;  
            last=rear;      
    }
    return level;
}


