
int Max(Node *f){
    if(f->next==NULL){
        return f->data;
    }
    else{
        if(f->data>Max(f->next))
            return f->data;
        else
            return Max(f->next);
    }
}


int Num(Node *f){
    int num=0;
    while(f!=NULL){
        f=f->next;
        ++num;
    }
    return num;
}

int *Search(Node *f, int x){
    while(f!=NULL){
        if(f->data==x)
            return f;
        f=f->next;
    }
    return NULL;
