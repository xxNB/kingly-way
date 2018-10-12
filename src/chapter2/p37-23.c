/*删除绝对值相等的结点*/

void Del_6(Node *head){
    Node *p=head, *r, *q;
    ElemType x;
    while(p!=NULL){
        x= |p->data|;
        q=p->next;
        while(|p->data|==x){
            r=p;
            p=p->next;
            free(r);
        }
        p=q;   //将p恢复到q的位置
    }
}

// 空间换时间 借助辅助数组，下标为链表里的data值

typedef struct node{   //这里的node内部使用
    int data;
    struct node *link;
}Node;  // 这里的Node外部使用
typedef Node *PNODE;    //现需要处理的单链表头结点

void func(PNODE h, int n){
    PNODE p=h, r;
    int *q, m;
    q=(int *)malloc(sizeof(int)*(n+1));    // n+1个位置的辅助空间！！！
    for(int i=0;i<n+1;i++)
        *(q+i)=0;
    while(p->link!=NULL){
        m=p->link->data>0?p->link->data:-p->link->data;
        if(*(q+m)==0){
            *(q+m)=1;
            p=p->link;
        }
        else{
            r=p->link;
            p->link=r->link;
            free(r);
        }
    }
    free(q);    //free掉辅助空间
}

