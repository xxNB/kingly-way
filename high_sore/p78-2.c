/*递归算法算方程*/

float Sqart_A1(float A, float p, float e)
{
    if(fabs(p*p-A)<e)
        return p;
    else
        return Sqart_A1(A, (p+A/p)/2, e);

}


/*非递归*/

float Sqrt_A2(float A, float p, float e)
{
    while(fabs(p*p-A)>=e)
        p=(p+A/p)/2;
    return p;
}