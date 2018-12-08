
void delete(SqList &L, int i, int j){
    while(j<L.length){
        L[i]=L[j+1];
        ++i,++j;
    }
    L.length=i-1;
}

