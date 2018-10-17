/*表达式括号是否匹配*/

bool BracketsCheck(char *str){
  InitStack(S);
  int i =0;
  while(str[i]!='\0') {
    switch(str[i]){
      case '{': push(S, '{');
      case '(': push(S, '(');
      case '[': push(S, '[');
      case '}': Pop(S,p);
      if p!='{'
        return false;
      break;                        // break一定要跳出
      case ')': Pop(S,p);
      if p!='('
        return false;
      break;
      case ']': Pop(S,p);
      if p!='['
        return false;
      break;
    }

  }
  
}
