
/*从顺序表中删除s~t之间元素*/
bool Del_4(SqList &L, ElemType s, ElemType t){
    if(s>t||L.length==0)
        return false;
    // 不在s与t之间的元素需左移动的次数k, 在s~t之间的元素始终占着位置,故k值是累加的
    int k=0, i=0;
    for(;i<L.length;i++){
        if(s<=L.data[i]&&L.data[i]<=t)
            k++;
        else{
        L.data[i-k]=L.data[i];
                }
    }
    L.length-=k;
    return true;
}
