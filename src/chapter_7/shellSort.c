/*希尔排序*/


void ShellSort(ElemType A[], int n){
    for(dk=n/2;dk>=1;dk=dk/2)               // 步长变化
        for(i=dk+1;i<=n;++i)
            if(A[i].key<A[i-dk].key){       // 需将A[i]插入有序递增子表
                A[0]=A[i];
                for(j=i-dk;j>0&&A[0].key<A[j].key;j-=dk)
                    A[j+dk]=A[j];
                A[j+dk]=A[0];
            }
}
