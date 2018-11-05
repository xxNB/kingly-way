/*双向冒泡排序*/

void two_buffer(ElemType A[]){
    int s=0, e=A.lenght-1;
    while(s<e&&flag){
        bool flag=false;
        for(i=s; i<e; i++){
            if(A[i]>A[i+1]){
            temp=A[i+1];
            A[i+1]=A[i]
            A[i]=temp;
            flag=true;
        }}
        s++;
        for(j=e;j>e;j--){
            if(A[j]<A[j-1]){
            temp=A[j-1];
            A[j-1]=A[j];
            A[j]=temp;
            flag=true;
        }}
        e--;
        if(flag=false)
            return;
    }
}
