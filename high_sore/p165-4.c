/*二叉树转单链表*/

void TwoToLink(BTNode *b, BTNode &*head, BTNode &*tail){        // 他们都是二叉树里面的节点
    if (b->left==NULL&&b->right==NULL){
        if(head==NULL){
            head=b;
            tail=b;
        else{
            tail->right=b;
            tail=b;
        }
        }
    }
    TwoToLink(b->left, head, tail);
    TwoToLink(b->right, head, tail);
}