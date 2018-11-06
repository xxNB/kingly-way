/*荷兰国旗*/

typedef enum{RED, WHITE, BLUE}  color;

void Flag_Arrange(color a[], int n){
    int i=0, j=0, k=n-1;
    while(j<=k)
    switch(a[j]){
        case RED: Swap(a[i], a[j]); i++; j++; break;
        case WHITE: j++; break;
        case BLUE: Swap(a[j],a[k]); k--;
    }


}
