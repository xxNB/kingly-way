
void del_x_l(Sqlist &L, ElemType x){
    int k=0;                  //记录不等于x的元素位置,保存不等于x的元素
    for(i=0;i<L.length;i++)
        if(L.data[i]!=x){
            L.data[k]=L.data[i];
            k++;
        }
    L.length==k;             //重新规划顺序表长度
    }
}

