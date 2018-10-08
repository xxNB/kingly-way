
/*顺序表删除x值*/
void Del_2(SqList &L){
    // k记录值不等于x的位置
    int k = 0;
    for(i=0;i<L.length;i++){
        if(L.data[i]!=x){
            L.data[k]=L.data[i]
            k++;
        }
    }
    //更改L的length值
    L.length=k;
}