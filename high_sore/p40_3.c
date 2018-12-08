
void reserve(SqList &L, int l){
    int i=0, j=l-1, temp;
    while(i<j){
        temp=L[j];
        L[j]=L[i];
        L[i]=L[j];
        ++i,++j;
    }
}
