/*2个栈模拟队列*/

int EnQueue(Stack &S1, Stack &S2, ElemType e){
  if(!StackOverflow(S1)){
    Push(S1,e);
    return 1;
  }
  if(StackOverflow(S1)&&!StackEmpty(S2)){
  printf("队列满");
  return 0;
  }
  if(StackOverflow(S1)&&StackEmpty(S2)){
    while(!StackEmpty(S1)){
      Pop(S1,x);
      Push(S2,x);
    }
  }
}


int DeQueue(Stack &S1, Stack &S2, ElemType &x){
  if(!StackEmpty(S2)){
    Pop(S2,x);
  }
  else if(StackEmpty(S1)){
    printf("队列为空");
  }
  else{
    while(!StackEmpty(S1)){
      Pop(S1,x);
      Push(S2,x);
    }
    Pop(S2,x);
  }
}
