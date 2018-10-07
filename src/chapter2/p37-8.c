
/*两个单链表的公共结点*/

LinkList Search_1st_Common(LinkList L1, LinkList L2){
    int len1=Lenght(L1), len2=Lenght(L2);
    LinkList longList, shortList;
    if(len1>len2){
        longList =L1->next; shortList=L2->next;
        dist=len1-len2;
    }
    else{
        longList=L1->next; shortList=L2->next;
        dist=len2-len1;
    }
    while(dist--){
        longList=longList->next;
    }
    while(longList!=NULL){
        if(longList==shortList)
            return longList;
        else{
            longList=longList->next;
            shortList=shortList->next;
        }
    }
    return NULL;
}