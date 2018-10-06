int M_Search(int A[], int B[], int n){
    int s1=0, d1=n-1,m1,s2=0,d2=n-1,m2;  //分别表示序列A和B的首位数，末位数和中位数
    while(s1!=d1||s2!=d2){
        m1=(s1+d1)/2;
        m2=(s2+d2)/2;
        if(A[m1]==B[m2])
            return A[m1];
        if(A[m1]<B[m2]){
            if((s1+d1)%2==0){     //若元素个数为奇数
                s1=m1;    // 舍弃A中间点以前的部分且「保留中间点」
                d2=m2;
            }
            else{     //若元素个数为偶数
                s1=m1+1;   //舍弃A中间点及以前部分
                d2=m2;
            }
        }
        else{
            if((s2+d2)%2==0){
                d1=m1;
                s2=m2;         // 舍弃B中间点以前的部分且「保留中间点」
            }
            else{
                d1=m1;
                s2=m2+1;     //舍弃B中间点及以前部分
            }  
        }
    }
    return A[s1]<B[s2]? A[s1]:B[s2];
}