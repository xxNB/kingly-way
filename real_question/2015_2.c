
void bstSearch(int *bt, int start, int end, int key){
    mid=(end-start)/2+start
    if(btkey<bt[mid]){
        bstSearch(bt, start, mid, key);
    }
    else if(key>bt[mid]){
        bstSearch(bt, mid, end, key);
    }
    else if(key=bt[mid]){
        return bt[mid];
    }
    else
        return NULL;
}

void start(){
    bstSearch(bt, 0, len(bt), key);
}
