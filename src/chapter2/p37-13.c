/*归并俩递增序列排序为递减序列*/

void MergeList(LinkList &La, LinkList &Lb){
    LNode *r, *pa=la->next, *pb=Lb->next;
    La->next=NULL;

    while(pa!=NULL&&pb!=NULL){    //均不为空才循环
        if(pa->data>pb->data){
            r=pb->next;
            pb->next=La->next;
            La->next=pb;
            pb=r;
        }
        else{
            r=pa->next;
            pa->next=La->next;
            La->next=pa;
            pa=r;
        }

    }
    if(pa!=NULL){
        while(pa!=NULL){
            r=pa->next;
            pa->next=La->next;
            La->next=pa;
            pa=r;
        }
    else{
        while(pb!=NULL){
            r=pb->next;
            pb->next=La->next;
            La->next=pb;
            pb=r;
    }
    }
    free(Lb);
    }
