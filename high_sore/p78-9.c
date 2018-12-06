/*栈解决数据进制转换问题*/

int BaseTrans(int N){
    int i, result=0;
    int stack[maxSize], top=-1;
    while(N!=0){
        i=N%2;                  //取余
        N=N/2;                  //取商
        stack[++top]=i;
    }
    while(top!=-1){
        i=stack[top];
        --top;
        result=result*10+i;
    }
    return result;
}
