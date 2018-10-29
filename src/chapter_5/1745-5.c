/**删除所有叶结点*/

void removeLeave(BtTree t){
    if(t==NULL||t.left==NULL&&t.right==NULL){
        return NULL;
    }
    t.left=removeLeave(t.left);
    t.right=removeLeave(t.right);
    return t;
}
