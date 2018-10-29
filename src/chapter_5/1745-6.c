/*计算指定结点*p所在的层次*/

int level(BtTree t, Node goal){
    if(t==NULL) return 0;
    if(t==goal) return depth;
    int l=level(cur->left, goal, depth+1);
    if(l>0) return l;
    int r=level(t->right, goal, depth+1);
    if (r>0) return r;
    return -1;
}
