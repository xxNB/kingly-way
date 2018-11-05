/*奇移动到偶前*/

void Odd_Move(ElemType A[], int len){
    int i=0, j=len-1;
    while(i<j){
        while(i<j&&A[i]%2!=0) i++;    //从前向后找到一个偶数
        while(i<j&&A[j]%2!=1) j--;    //从后向前找到一个奇数元素
        if(i<j){
            Swap(A[i],A[j]);
        }
        i++;j--;
    }
}
