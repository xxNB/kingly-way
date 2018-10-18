/*在栈道调整座位*/

void Train_Arrange(char *train){        // 数组头指针
    char *p=train, *q=train, c;           //全新train
    stack s;
    InitStack(s);
    while(*p){
      if(*p=='H')
        Push(s, *p);
      else
        *(q++)=*p;              //  这里保证q全为soft
      p++;
    }
    while(!StackEmpty(s)){
        Pop(s, c);
        *(q++)=c;   // 把H接在后面
    }    

}
