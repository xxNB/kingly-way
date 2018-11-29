/*二路归并排序*/

void mergeSort(int A[], int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);              //归并，merge俩个有序数组,直接修改调用线性表那一章

    }

}