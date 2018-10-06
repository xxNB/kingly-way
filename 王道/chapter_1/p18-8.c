
typedef int DataType;
// 转置轮子
void Reverse(DataType A[], int left, int right, int arraySize){
    if(left>=right||right>=arraySize)
        return;
    int mid = (left+right)/2;
    for(int i=0;i<mid-left;i++){    //左右互换
        DataType temp=A[left+i];
        A[left+i]=A[right-i];
        A[right-i]=temp;
    }
}

void Exchange(DataType A[], int m, int n , int arraySize){
    Reverse(A,0,m+n-1, arraySize);
    Reverse(A,0,n-1,arraySize);
    Reverse(A,n,m+n-1,arraySize);
}