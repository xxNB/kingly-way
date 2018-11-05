/*快速排序随机选取基准*/

int Partition2(ElemType A[], int low, int high){
    int rand Index=low+rand()%(high-low+1);
    Swap(A[rand_Index], A[low]);
    ElemType pivot=A[low];
    int i=low;
    for(int j=low+1; j<=high; j++)
        if(A[j]<piovt)
            swap(A[++i], A[j]);
    swap(A[i], A[low]);
    return i;
}

