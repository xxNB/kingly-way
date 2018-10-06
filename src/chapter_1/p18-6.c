
bool Delete_Same(SeqList& L){
    if(L.length==0)
        return false;
    int i, j;    // i 存储不同元素的位置， j一直往前移动，为工作指针
    for(i=0;j=1;j<L.length;j++){
        if(L.data[i]!=L.data[j])
            L.data[++i]=L.data[j]; //先加i再赋值
        L.length=i+1;
        return true;
    }

}