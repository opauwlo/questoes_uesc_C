#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

int num, d1, d2, d3, d4, dx, dy;

    scanf("%d",&num);

    d4 = num/1000;
    d3 = num/100;
    d3 = d3%10;
    d2 = num/10;
    d2 = d2%10;
    d1 = num/1;
    d1 = d1%10;

    dx = d4*10 + d3;
    dy = d2*10 + d1;
    dx = dx+dy;
    dx = pow(dx,2);

    if ( dx== num) {

        printf("O numer é valido");
    }

    else {
        printf("o numero não é valido");
    }

    system ("PAUESE");
return (0);
}
