void findMin(int A[], int &i){
    i=A[0];
    while(i/10<=N-1){
        if(i%10>A[i/10]){
            i=i-i%10;
            i=i+A[i/10];
        }
        i=i+10;
    }
    i=i%10;
}


void findMaxMin(int A[], int n, int &max, int &min){
    max=min=A[1];

    for(int i=2;i<=n;++i){
        if(A[i]>max)
            max=A[i];
        else if(A[i]<min)
            min=A[i];
    }
}

int compare(float A[], int An, float B, int B){
    int i=0;
    while(i<An&&i<Bn){
        if(fbs(A[i]-B[i])==0))
            ++i;
        else
            break;
    }
    if(i==An&&i==Bn)
        return 0;
    else if(i=An&&i<Bn||A[i]<B[i])
        return -1;
    else
        return 1;
}