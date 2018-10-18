/*计算二叉树高度*/

int Btdepth(BiTree T){
  if(!T)
    return 0;
  int front=-1, rear=-1;
  int last=0,level=0           // level表示层数， last表示当前层的最右结点
  BiTree Q[MaxSize];
  Q[++rear]=T;
  BiTree p;                   //p 
  while(front<rear){              // front=rear，队列为空
        p=Q[++front];           //  头结点出队列!!
    if(p->lchild)
      Q[++rear]=p->lchild;
    if(p->rchild)
      Q[++rear]=p->rchild;
    if(front==last){            // 该层次结点出 完
      level++;
      last=rear;
    }
  }
  return level;
}
