/*简单选择排序*/


void selectSort(ElemType A[], int n){
    for(i=0;i<n-1;i++){
        min =i;
        for(j=i+1;j<n;j++)
            if(A[j]<A[min]) min=j;
        if(min!=i) swap(A[i], A[min]);
    }
}
