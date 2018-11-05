/*快速排序随机选取基准*/

int Partition2(ElemType A[], int low, int high){
    int rand Index=low+rand()%(high-low+1);
    Swap(A[rand_Index], A[low]);        //交换random位置到low位置
    ElemType pivot=A[low];
    int i=low;
    for(int j=low+1; j<=high; j++)
        if(A[j]<piovt)
            swap(A[++i], A[j]);
    swap(A[i], A[low]);               //将low位置到元素恢复到random位置
    return i;
}

