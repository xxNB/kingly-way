/*栈模拟递归算法*/


double p(int n, double x){
  struct stack{
    int no;
    double val;
  }st[MaxSize];
  int top=-1,i;
  double fv1=1, fv2=2*x;
  for(i=n;i>=2;i--){
    top++;
    st[top].no=i;
  }
  while(top>=0){
    st[top].val=2*x*fv2-2*(st[top].no-1)*fv1;
    fv1=fv2;
    fv2=st[top].val;
    top--;
  }
  if(n==0){
    return fv1;  
  }
  return fv2;
}
