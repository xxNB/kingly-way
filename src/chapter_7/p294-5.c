/*基于快排的思想快速寻找第k小的元素*/

int kth_elem(int a[], int low, int high, int k){
    int pivot=a[low];
    int low_temp=low;
    int high_temp=high;
    while(low<high){                      
        while(low<high&&a[high]>=pivot)
            --high;
        a[low]=a[high];
        while(low<high&&a[low]<=pivot)
            ++low;
        a[high]=a[low];
    }
    a[low]=pivot;                           // 将曲轴元素放到最终位置
    if(low==k)
        return a[low];
    else if(low>k)
        return kth_elem(a, low_temp, low-1, k);
    else 
        return kth_elem(a, low+1, high_temp, k-low);
}
