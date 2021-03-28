#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

int n,fat=1, ex=1;
float x;

scanf("%d",&n);
scanf("%f",&x);


for (int i=1; i<=n; i++)
{
    fat *=i;
    ex =(pow(x,i))/fat;
    printf("%d", ex);
}



return (0);
}
