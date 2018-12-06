
void insertTree(TreeNode *r, int d){
    if(r=NULL){
        r=(TreeNode *)malloc(sizeof(TreeNode));
        r->data=d;
        r->lchild=NULL;
        r->rchild=NULL;
    }else{
        if(d<r->data){
            insertTree(r->lchild, d);
        }else if(d>r->data){
            insertTree(r->rchild, d);
        }
    }
}

void main(){
    TreeNode *r=NULL;
    int a[MAX], i;
    for(i=0;i<MAX;i++){
        BSTInsert(T, a[i]);
    }
}
