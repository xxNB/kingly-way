/*合并俩个有序表*/


void merge(SqList M, SqList N, SqList &B){   // B新的有序表
    if(M.length+B.length>B.maxSize)
        return false;
    int i, j, k=0;
    for(i=0,j=0;i<M.length&&j<N.length;k++){
        if(M.data[i]<N.data[j]){
            B.data[K]=M.data[i];
            i++;
        else{
            B.data[K]=N.data[j];
            j++;
        }
        }
    }
    while(i<M.length){
        B.data[k++]=M.data[i++];
        }
    while(j<N.length){
        B.data[k++]=M.data[j++];
    }
    C.length=k+1;     //重定义C的长度
    return true;
}