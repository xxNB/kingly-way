
bool enQueue(Queue &Q, ElemType s){
    if Q.count>MAXQSIZE:
        return false;
    //Q[++front] = s;
    int locate = (Q.front+Q.count)%MAXQSIZE;
    Q.element[locate] = s;
    Q.count++;
    return true;
}

bool deQueue(Queue &Q, ElemType &s){
    if (!Q.count):
        return false;
    s = Q.element[front];
    Q.front=(Q.front+1)%MAXSIZE;
    --Q.count;
    return true;
}

