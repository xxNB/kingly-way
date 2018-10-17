/*非递归后序*/

void PostOrder(BiTree T){
  initStack(S);
  p=T;
  r=NULL;
  while(p||!IsEmpty(S)){
    if(p){
      push(S,p);
      p=p->lchild;
    }
    else{
      GetTop(S,p);
      if(p->rchild&&p-rchild!=r){
        p=p->child;
        push(S,p);
        p=p->child;
      }
      else{
        pop(S,p);
        visit(p->data);
        r=p;                      // 记录最近访问过的结点
        p=NULL;             
      }
    }
  }
}
    
