/*表达式树转中缀表达式*/

void BtreeToE(BTree *root){
    BtreeToExp(root, 1);
}

void BtreeToExp(BTree *root, int deep){
    if(root==NULL) return;          // 中序遍历 ！
    else if(root->left==NULL&&root->right==NULL)
        printf("%s", root->data);
    else{
        if(deep>1) printf("(");
        BtreeToExp(root->left, deep+1);
        printf("%s", root->data);
        BtreeToExp(root->right, deep+1);
        if(deep>1) printf(")");
    }

}
