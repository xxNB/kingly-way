/*借助栈来逆序队列*/

void Reverse_Queue(Stack S, Queue Q){
  while(!QueueEmpty(Q)){
  x=DeQueue(Q);      
  Push(S,x);
  }
  while(!StackEmpty(S)){
    Pop(S, x);
    EnQueue(Q,x);
  }
}
