
bool judge(char str, int len){
    InitStack(SqSqtck &s);
    int i;
    for(i=0;i<len;++i){
        switch(str[i]):{
        case '(':
          Push(s, '(');
          break;
        case '{':
          Push(s, '{');
          break;
        case '[':
          Push(s, '[');
          break;
        case ')':
          Pop(s, char &e);
          if(e!='(') return false;
          break;
        case '}':
          Pop(s, char &e);
          if(e!='{') return false;
          break;
        case ']':
          Pop(s, char &e);
          if(e!='[') return false;
          break;
          }
      
    }
    return true;
}
