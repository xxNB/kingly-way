
/*
静态分配
#define Maxsize 50
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;
------------------------------
动态分配
#define InitSize 100
typedef struct{
    ElemType *data;
    int MaxSize, length;
}SqList;
*/


ElemType Del_1(Sqlist &L, ElemType &value){
    if(L.length==0)
        return false;
    value = L.data[0];
    int pos =0;
    for(i=1;i<L.length;i++){
        if(L.data[i]<value)
            value = L.data[i];
            pos=i;
    }
    L.data[pos]=L.data[L.length];
    L.length = L.length-1;
    return value;
}