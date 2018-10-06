
void Reverse(Sqlist &L){
    Elemtype temp;
    for(i=0;i<L.length/2;i++){      // i < L.length/2 **
        temp=L.data[i];
        L.data[i]=L.data[L.length-i-1];
        L.data[L.length-i-1]=temp;
    }
}