
bool Del_s_t(Sqlist &L, ElemType s, ElemType t){
    int i,k=0;    // k记录元素值在s到t之间元素de个数
    if(L.length==0||s>t)
        return false;
    for(i=0;i<L.length;i++){
        if (L.data[i]>=s&&L.data[i]<=t)    // 统计在范围内的个数
            k++;
        else 
        L.data[i-k]=L.data[i];  // 不在范围之内的元素左移k个位置
    }
    L.length-=k;
    return true;
}