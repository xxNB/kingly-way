/*求俩单链表交集*/

void Con_List(LinkList &A, LinkList &B){
    LNode *ra=A->next, *rb=B->next, *r;
    while(rb!=NULL){
        if(ra->data<rb->data){
            r=ra;
            ra=ra->next;
            free(r);
        }
        else if(ra->data>rb->data){
            r=rb;
            rb=rb->data;
            free(r);
        }
        else{
            ra=ra->next;
            r=rb;
            rb=rb->next;
            free(r);
        }
    }    
    while(ra){
        r=ra;
        ra=ra->next;
        free(r);
    }
    while(rb){
        r=rb;
        rb=rb->next;
        free(r);
    }
    ra->next=NULL;
    free(B);
    return A;
}