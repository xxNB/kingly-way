/*tag区别队满和队空的状态*/

int EnQueue1(SqQueue &Q, ElemType x){
  if(Q.front==Q.rear&&Q.tag==1)   
    return 0;                         // 俩个条件都满足时则队满
  Q.data[Q.rear]=x;                   // rear是一个指针
  Q.rear=[Q.rear+1]%MaxSize;       
  Q.tag=1;                          // 可能队满
  return 1;

int DeQueue1(SqQueue &Q, ElemType x){
  if(Q.front==Q.rear&&Q.tag==0)
    return 0;
  x=Q.data[Q.front];
  Q.front=(Q.front+1)%MaxSize;
  Q.tag=0
  return 1;
}
}
