
void reflect(Binary_node *root){
    if(root){
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    reflect(root->left);
    reflect(root->right);
    }
}
