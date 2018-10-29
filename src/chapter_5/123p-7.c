/*完全二叉树的判断*/

bool IsComplete(BiTree T){
  InitQueue(Q);
  if(!=T)
    return 1;
  EnQueue(Q,T);                     //进队列
  while(!IsEmpty(Q)){
    DeQueue(Q,p);
    if(p){
      EnQueue(Q,p->lchild);         //空结点也放入  按层次遍历方式全部进入
      EnQueue(Q,p->rchild);         //空结点也放入
    }
    else
      while(!IsEmpty(Q)){
        DeQueue(Q,p);      
        if(p)                     // 发现空结点后，如果后续有空结点，即不为完全二叉树
          return 0;
      }
  } 
    return 1;
}
