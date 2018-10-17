/*二叉树自下而上，从右到左的层次遍历算法*/



void Cenci1(BiTree T){
  Stack s; Queue Q;           //借助一个栈倒序,需求和正常层次遍历刚好相反
  if(bt!=NULL){
    InitStack(s);
    InitQueue(Q);
    EnQueue(Q,bt);
    while(IsEmpty(Q)==false){
      DeQueue(Q,p);
      Push(s,p);
      if(p->lchild)
        EnQueue(Q,p->lchild);
      if(p->rchild)
        EnQueue(Q,p->rchild);
    }
    while(IsEmpty(s)==false){
      Pop(s,p);
      visit(p->data);
    }
  }
}
