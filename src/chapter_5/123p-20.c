/*表达式树转中缀表达式*/

void BtreeToE(BTree *root){
    BtreeToExp(root, 1);
}

// 根结点和叶结点特殊处理
void BtreeToExp(BTree *root, int deep){
    if(root==NULL) return;          // 中序遍历 ！
    else if(root->left==NULL&&root->right==NULL)      //若为叶结点
        printf("%s", root->data);                     //输出操作数，不加括号
    else{
        if(deep>1) printf("(");                       //若有子表达式则加1层括号
        BtreeToExp(root->left, deep+1);   
        printf("%s", root->data);                     //输出操作符
        BtreeToExp(root->right, deep+1);
        if(deep>1) printf(")");                       //若有子表达式则加1层括号
    }

}
