void Del_X_3(LinkList &L, ElemType x){
    LNode *p;         // 声明待删除结点为p
    if(L==NULL)
        return;
    if(L->data==x){
        p=L;
        L=L->next;
        free(p);
        Del_X_3(L,x);
    }
    else
        Del_X_3(L->next,x);
}