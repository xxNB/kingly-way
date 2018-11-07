/*判断一个完全二叉树是否是最小堆*/

bool isMinHeap(ElemType A[], int len){
    if(len%2==0){
        if(A[len/2]>A[len])
            return false;
        for(i=len/2-1;i>=1;i--)               //判断所有双分支结点
            if(A[i]>A[2*i]||A[i]>A[2*i+1])
                return false;
    }
    else{                                     
        for(i=len/2;i>=1;i--)                 //判断所有双分支结点
            if(A[i]>A[2*i]||A[i]>A[2*i+1])
                return false;
    }
    return true;
}
