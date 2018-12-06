
int main(){
    int N, n, c;
    QElemType t, x;
    SqQueue f, *Q;
    Q=&f;
    InitQueue(Q);
    prinf("请输入杨辉三角规模:\n");
    scanf("%d", &N);
    EnQueue(Q,1);
    for(n=2;n<=N;n++){
        EnQueue(Q, 1);
        for(c=1;c<=n-2;c++){
            t=GetHead(Q);
            DeQueue(Q);
            printf("%4d", t);
            x=GetHead(Q);
            t=t+x;
            EnQueue(Q,t);
        }
        EnQueue(Q,1);
        print("%4d", GetHead(Q));
        DeQueue(Q);
        printf("\n");
    }
}
