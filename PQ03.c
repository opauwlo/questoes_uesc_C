#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
float x1, y1;

scanf("%f",&x1);
scanf("%f",&y1);

if (x1 > 0 && y1 > 0)
    {
        printf("O ponto esta no I quadrante");
    }

if (x1 < 0 && y1 < 0)
    {
        printf("O ponto esta no III quadrante");
    }

if (x1 < 0 && y1 > 0)
    {
        printf("O ponto esta no II quadrante");
    }

if (x1 > 0 && y1 < 0)
    {
        printf("O ponto esta no IV quadrante");
    }

if (x1 == 0 && y1 != 0)
    {
        printf("O ponto se encontra no eixo das ordenadas");
    }

if (x1 != 0 && y1 == 0)
    {
        printf("O ponto se encontra no eixo das abscissas x");
    }
return (0);
}
