#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
int n, i,x, sinal = -1;
float logT = 1;

scanf("%d",&n);
scanf("%d",&x);

for (i = 1; i < n; i++)
    {
        logT += (sinal) * pow(x,i)/i;
        sinal *= -1;

    }


return (0);
}
