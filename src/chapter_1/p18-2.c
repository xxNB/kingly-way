/*逆转顺序表*/

void Reverse(SqList &L){
    int i=0, j=L.length-1;
    ElemType temp;
    for(i<L.length/2){
        temp = L.data[i];
        L.data[i]=L.data[j];
        L.data[j]=temp;
        i++;
        j--;
    }
}