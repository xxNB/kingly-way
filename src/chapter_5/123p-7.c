/*完全二叉树的判断*/

bool IsComplete(BiTree T){
  InitQueue(Q);
  if(!=T)
    return 1;
  EnQueue(Q,T);                     //进队列
  while(!IsEmpty(Q)){
    DeQueue(Q,p);
    if(p){
      EnQueue(Q,p->lchild);         //空结点也放入
      EnQueue(Q,p->rchild);         //空结点也放入
    }
    else
      while(!IsEmpty(Q)){
        DeQueue(Q,p);
        if(p)
          return 0;
      }
  } 
    return 1;
}
