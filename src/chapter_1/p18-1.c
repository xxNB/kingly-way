
bool Del_Min(sqList &L, ElemType &value){  // L, value均会改变
    if(L.length==0)
        return false;
    value=L.data[0];
    int pos=0;
    for (int i=1; i<L.length;i++)
        if(L.data[i]<value){
            value=L.data[i];  // 让value记忆当前具有最小值的元素
            pos=i;
        }
    L.data[pos]=L.data[L.length-1];  //空出的位置由最后一个元素填充
    L.length--;
    return true;
}