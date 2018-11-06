/*分组，|n1-n2|最小, |S1-S2|最大*/

int setPartion(int a[], int n){
    int pivotkey, low=0, low0=0, high=n-1, high0=n-1, flag=1, k=n/2, i;
    int s1=0, s2=0;
    while(flag){
        piovtkey=a[low];
        while(low<high){
            while(low<high&&A[high]>=piovtkey) --high;
            a[low]=a[high];
            while(low<high&&A[low]<=piovtkey)  ++low;
            a[high]=a[low];
        }
        a[low]=piovtkey;        //high和low在同一位置, low=high跳出循环
        if(low=k-1)           //如果驱轴是n/2小元素，划分成功
            flag=0;
        else{
            if(low<k-2){
                low0=++low;
                high=high0;
            }
            else{
                high0=--high;
                low=low0;
            }
        }
    }
    for(i=0;i<k;i++) s1+=a[i];
    for(i=k;i<n;i++) s2+=a[i];
    return s2-s1;

}
