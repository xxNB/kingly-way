
//有序表
void Del_v_1(Sqlist &L, ElemType s, ElemType t){
   int i, j;
   if(s>=t||t.length==0)
        return false;
    for (i=0;i<L.length&&L.data[i]<s;i++);
    if(i>=L.length) 
        return false;  //所有元素均小于s，则返回
    for(j=i;j<L.length&&L.data[j]<=t;j++);
    for(;j<L.length;i++,j++)
        L.data[i]=L.data[j]   // 删除在此范围之内的元素
    L.length=i+1;
    return true;

}