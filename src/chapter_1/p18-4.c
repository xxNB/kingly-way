//有序表删除s与t之间元素

bool Del_3(SqList &L, ElemType s, ElemType t){
    //i记录在此范围的起始位置,j记录在此范围的结束位置
    if(s>=t||L.length==0)
        return false;
    for(int i=0;i<L.length&&L.data[i]<s;i++);    //满足条件再加加
    if(i>=L.length)
        return false;
    for(int j=i;j<L.length&&L.data[j]<=t;j++);   
    //删除此范围元素
    for(;j<L.length;i++,j++){
         L.data[i]=L.data[j]
    }
    L.length=i+1;
    return true;
}