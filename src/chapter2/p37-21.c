/*查找单链表倒数k个位置上的元素*/


typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *link;
}LNode, *LinkList;

//双指针 p先移动
void search(LinkList L, int k){
    LNode *p=L->link, *q=L->link;
    int count=0;
    while(p!=NULL){
        if(count<k)
            count++;
        else
            q=q->link;
        p=p->link;   // p先移动
    }
    if(count<k)
        return 0;
    else
        printf("%d", q->data);
    return 1;
}