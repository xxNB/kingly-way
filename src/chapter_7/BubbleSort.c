/*冒泡排序*/

void BubbleSort(ElemType A[], int n){
    for(i=0;i<n-1;i++){
        flag=false;                 //设置标志
        for(j=n-1;j>i;j--)
            if(A[j-1].key>A[j].key){
                swap(A[j-1], A[j]);
                flag=true;
            }
        if(flag=false)
            return ;
    }
}
