/*先序遍历改后序*/

void change(char pre[], int L1, int R1, char post[], int L2, int R2){
    if(L1<R1){
        post[R2]=pre[L1];
        change(pre, L1+1, (L1+1+R1)/2, post, L2, (L2+R2-1)/2);          // 递归处理pre[]中的前一半，将其放在post[]的前一半
        change(pre, (L1+1+R1)/2+1, R1, post, (L2+R2-1)/2+1, R2-1);      // 递归处理pre[]中的后一半，将其放在post[]的后一半
    }

}