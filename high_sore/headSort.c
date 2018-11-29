/*堆排序函数*/

//调整大根堆
void Sift(int R[], int low, int high){
    int i=low, j=2*i;
    int temp=R[i];
    while(j<=high){
        if(j<high&&R[j]<R[j+1])         //若右孩子较大，则把j指向右孩子             
            ++j;
        if(temp<R[j]){
            R[i]=R[j];                  //将R[j]调整到双亲结点的位置
            i=j;                        //修改i和j的值，以便继续向下调整
            j=2*i;
        }
        else
            break;
    }
    R[i]=temp;
}

/*堆排序函数*/

void heapSort(int R[], int n){
    int i;
    int temp;
    for(i=n/2;i>=1;--i)
        Sift(R,i,n);
    for(i=n;i>=2;--i){
        temp=R[1];
        R[1]=R[i];
        R[i]=temp;
        Sift(R,1,i-1);
    }
}