/*快速排序*/

void QuickSort(int R[], int low, int high){
    int temp;
    int i=low, j=high;
    if(low<high){
        temp=R[low];
        while(i<j){
            while(j>i&&R[j]>=temp) --j;
            if(i<j){
                R[i]=R[j];                      //放在temp左边
                ++i;                            //i右移一位
            }
            while(i<j&&R[i]<temp) ++i;
            if(i<j){
                R[j]=R[i];                      //放在temp右边,补上j空缺的位置
                --j;                            //j左移一位
            }
        }
    }
    R[i]=temp;                                  //将temp放到最终位置
    QuickSort(R,low,i-1);
    QuickSort(R,i+1,high); 

}