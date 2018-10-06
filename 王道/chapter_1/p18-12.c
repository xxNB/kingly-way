int Majority(int A[], int n){
    int i,c,count=1;     //c用来保存 [候选主元素]，count用来计数
    c=A[0];
    for(i=1;i<n;i++)
        if(A[i]==c)
            count++;
        else
            if(count>0)
                count--;
            else{
                c=A[i];
                count=1;
            }
    if(count>0)
        for(i=count=0;i<n;i++)
            if(A[i]==c)
                count++;
            if(count>n/2) return c;
            else return -1;

}