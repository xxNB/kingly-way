void SearchExchangeInsert(ElemType A[], ElemType x){
    int low=0, high=n-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==x) break;       //找到
        else if (A[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(A[mid]==x&&mid!=n-1){   //找到  
        t=A[mid];A[mid]=A[mid+1];A[mid+1]=t;
    }
    if(low>high){  //未找到 插入
        for(i=n-1;i>high;i--) A[i+1]=A[i];
        A[i+1]=x;
    }
}