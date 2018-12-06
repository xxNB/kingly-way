
BiTree PreInCreat(ElemType A[], ElemType B[], int l1, int h1, int l2, int h2){
    root=(BiTNode*)malloc(sizeof(BiNode));
    root->data=A[l1];
    for(i=l2;B[i]!=root->data;i++)
    llen=i-l2;
    rlen=h2-i;
    if(llen)
        root->left=PreInCreat(A,B,l1+1,l1+llen,l2,l2+llen-1);
    else
        root->right=NULL;
    if(rlen)
        root->right=PreInCreat(A,B,h1-llen+1,h1,h2-rlen+1,h2)
    else
        root->right=NULL;
    return root;

}
