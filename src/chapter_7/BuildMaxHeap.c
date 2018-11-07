/*建立大根堆*/

void BuildMaxHeap(ElemType A[], int len){
    for(int i=len/2; i>0; i--)
        AdjustDown(A,i,len);
}


void AdjustDown(ElemType A[], int k, int len){
    A[0]=A[k];
    for(i=2*k;i<len;i*=2){
        if(i<len&&A[i]<A[i+1])
            i++;
        if(A[0]>=A[i])  break;
        else{
            A[k]=A[i];
            k=i;
        }
    }
    A[k]=A[0];
}
