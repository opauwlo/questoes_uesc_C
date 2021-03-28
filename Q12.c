#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int resX1 (int a1,int b1,int c1)
{
    int res, resX, resx1, resx2;
    res = ((b1*b1)-(4*a1*c1));
    resx1 = (-b1+sqrt(res))/2*a1;
    return resx1;
}
int resX2 (int a1,int b1,int c1)
{
    int res, resX, resx1, resx2;
    res = ((b1*b1)-(4*a1*c1));
    resx2 = (-b1-sqrt(res))/2*a1;
    return resx2;
}
int deltaR (int a1,int b1,int c1)
{
    int res, resX, resx1, resx2;
    res = ((b1*b1)-(4*a1*c1));
    resx1 = (-b1+sqrt(res))/2*a1;
    resx2 = (-b1-sqrt(res))/2*a1;
    return resx1;
    return resx2;
    return res;
}
int main(){

    int a,b,c, delta, x1,x2;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a!=0){

        delta = deltaR(a,b,c);
        if ( delta == 0)
        {
            x1 = resX1(a,b,c);
            printf("Delta cale 0, o valor de x1 e x2 eh = %d", x1);
        }
        else if (delta!=0&& delta>0)
        {
            x1 = resX1(a,b,c);
            x2 = resX2(a,b,c);
            printf("O valor de delta e = %d x1 = %d e x2 eh = %d", delta, x1, x2);

        }

    }
return (0);
}
