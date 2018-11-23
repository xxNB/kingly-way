/*查找第k小的元素*/

BSTNode Search_Small(BSTNode*t, int k){
    int cnt = count(root->left);
    if (k<=cnt){
        return Search_Small(root->left, k);
    } else if(k>cnt+1){
        return Search_Small(root->right, k-cnt-1);    // 减去 左子树结点数+跟结点
    }
    return root->val;
}

// 计算子树的结点个数
int count(TreeNode *node){
    if (!node) return 0;
    return 1 + count(node->left) + count(node->right)
}

