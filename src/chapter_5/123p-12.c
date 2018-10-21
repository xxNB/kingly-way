/*二叉树打印值为x的所有结点*/

typedef struct{
    BiTree t;
    int tag;
}stack;

void Search(BiTree bt, ElemType x){         //后序遍历方式根结点最后

    stack s[];
    top=0;
    while(bt!=NULL&&top>0){
        while(bt!=NULL&&bt->data!=x){
            s[++top].t=bt;              //入栈 !
            s[top].tag=0;
            bt=bt->lchild;
        }
        if(bt->data==x){
            printf("所查结点的所有祖先结点的值为:\n");
            for(i=1;i<top;i++)
              printf("%d",s[i].t->data);
              exit(1);
        }
    
        while(top!=0&&s[top].tag==1)          // 当右结点访问过，弹出栈
            top--;
        if(top!=0){
            s[top].tag=1;
            bt=s[top].t->rchild;
        }
    }
} 
