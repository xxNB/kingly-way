/*查找公共父节点*/

typedef struct{
    BiTree t;
    int tag;
}stack;

stack s[], s1[];

BiTree Ancestor(BiTree ROOT, BiTNode *p, BiTNode *q){
    top=0; bt=ROOT;
    while(bt!=NULL||top>0){
        while(bt!=NULL&&bt!=p&&bt!=q)
            while(bt!=NULL){
                s[++top].t=bt;
                s[top].tag=0;
                bt=bt->lchild;
            }
        while(top!=0&&s[top].tag==1){         //  退栈的时候去检查
            if(s[top].t=p){
                for(i=1;i<=top;i++)
                    s1[i]=s[i];
                    top1=top;
            }
            if(s[top].t=q)
                for(i=top;i>0;i--){
                    for(j=top1;j>0;j--)
                        if(s1[j].t==s[i].t)
                            return s[i].t;
                }
                top--;
        
        }
        if(top!=0){
            s[top].tag=1;
            bt=s[top].t->rchild;
        }
    }
    return NULL;

}
