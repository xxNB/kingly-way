/*先序输出并打印结点层次*/

void  func(BtTree t, k){
    static int  k=0;
    if t==NULL
        return;
    printf(k);
    printf(t->data)
    func(t->lchild, k++);
    func(t->rchild, k++);
  
}
