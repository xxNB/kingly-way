/*快速排序*/

void QuickSort(ElemType A[], int low, int high){
    if(low<high){
        int pivotpos=Partition(A, low, high);
        QuickSort(A, low, pivotpos-1);
        QuickSort(A, pivotpos+1, high);
    }
}

int Partition(ElemType A[], int low, int high){
    ElemType pivot=A[low];
    while(low<high){                        
        while(low<high&&A[high]>=pivot) --high;       //从右向左， 比基准小的移到low的位置, 刷新high的位置
        A[low]=A[high];
        while(low<high&&A[low]<=pivot) ++low;         //从左向右，  比基准大的移到当前high的位置, 刷新low的位置
        A[high]=A[low];
    }  // 将开始low的位置的元素抠出来，开始一轮一轮的交换移动
    A[low]=piovt;         //将piovt还原到当前low的位置
    return low;
}


