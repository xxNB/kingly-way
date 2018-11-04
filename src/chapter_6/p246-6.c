/*递归实现折半查找*/

typedef struct{
    ElemType *elem;
    int length;
}SSTable;

int BinSearchRec(SSTable ST, ElemType key, int low, int high){
    if(low>high)
        return 0;
    mid=(low+high)/2;
    if(key>ST.elem[mid])
      BinSearchRec(ST, key, mid+1, high);
    else if(key<ST.elem[mid])
      BinSearchRec(ST, key, low, mid-1);
    else
      return mid;

}
