
float average(float *score, float *high){
    float sum=0, aver;
    int i, j, count=0;
    for(i=0;i<50;i++)
        sum=sum+score[i];
    aver=sum/50.0;
    for(i=0;j=0;i<50;i++)
        if(score[i]>aver)
            high[j+1]=score[i];
            count++;
    return count;

