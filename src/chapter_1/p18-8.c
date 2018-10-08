/*分俩块 分别翻转数组元素*/

typedef int DataType;
//翻转顺序表的 轮子  
void Reverse(DataType A[], int left, int right, int arraySize){
    if(left>=right||right>=arraySize)
        return;
    int mid=(left+right)/2; 
    for(int i=0;i<mid-left;i++){
        DataType temp=A[left+i];
        A[left+i]=A[right-i];
        A[right-i]=temp;
    }
}

void Func_reverse(DataType A[], int m, int n, int arraySize){
    Reverse(A, 0, m+n-1, arraySize);
    Reverse(A, 0,n-1,arraySize);
    Reverse(A, n,m+n-1,arraySize);
}


