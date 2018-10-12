/*单链表保存单词*/

typedef struct Node{   // 结点
    char data;
    struct Node *next;
}SNode;   // 结构体名称


int listlen(SNode *head){        //求出以不同指针开头结点的长度
    int len=0;
    while(head->next!=NULL){
        len++;
        head=head->next;
    }
    return len;
}


void search_com(LinkList *str1, LinkList *str2) {
    int m, n;
    SNode *p， *q;
    m=listlen(p);
    n=listlen(q);
    for(p=str1; m>n;m--){
        p=p->next;
    }
    for(q=str2;n>m;n--){
        q=q->next;
    }
    while(p->next!=NULL&&p->next!=q->next){   // p->next==q->next 跳出循环
        p=p->next;
        q=q->next;
    }
    return p->next;    // 返回共同后缀的起始地址
}