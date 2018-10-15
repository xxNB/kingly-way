/*设计共享栈*/

#define maxsize 100
#define elemtp int
typedef struct{
    elemtp stack[maxsize];
    int top[2];
}stk;
stk s;     //全局变量

//入栈操作

int push(int i, elemtp x){
    if(i<0||i>1){
        printf("栈号输入不对");
        exit(0);
    }
    if(s.top[1]-s.top[0]==1){
        printf("栈已满\n");
        return 0;
    }
    switch(i){
        case 0: s.stack[++s.top[0]]=x; return 1; break;
        case 1: s.stack[--s.top[1]]=x; return 1;
    }
}

//退栈操作

elemtp pop(int i){
    if(i<0||i>1){
        printf("栈号输入错误\n");
        exit(0);
    }
    switch(i){
        case 0:
            if(s.top[0]==-1){
                printf("栈空\n");
                return -1;
            }
            else
                return s.stack[s.top[0]--];
        case 1:
            if(s.top[1]==maxsize){
                printf("栈空\n");
                return -1;
            }
            else
                return s.stack[s.top[1]++];
    }
}
