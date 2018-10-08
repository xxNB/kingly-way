/*有序表中删除重复元素*/

void Del_5(SqList &L){
    // i保存不重复元素的位置
    if (L.length==0)
        return false;
    int i, j=1;
    for(i=0;i<L.length;j++){
        if(L.data[i]!=L.data[j]){
            i++;
            L.data[i]=L.data[j];     //先+1再赋值
        }
    L.length=i+1; //改变L的长度
    return true;
    }
}