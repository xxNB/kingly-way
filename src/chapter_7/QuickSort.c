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
    while(low<high){                        //跳出循环时基准到达最终位置
        while(low<high&&A[high]>=pivot) --high;
        A[low]=A[high];
        while(low<high&&A[low]<=pivot) ++low;
        A[high]=A[low];
    }
    A[low]=piovt;
    return low;
}


