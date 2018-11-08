/*实现计数排序*/

void CountSort(ElemType A[], ElemType B[], inr n){
    int cnt;
    for(i=0;i<n;i++){
        for(j=0,cnt=0;j<n;j++)
            if(A[j].key<A[i].key)
                cnt++;        //统计关键字比它小的元素个数
        B[cnt]=A[i];          //放入相应的位置上
    }
}
