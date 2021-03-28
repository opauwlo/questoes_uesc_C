#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){

    float raio, circunferencia, diametro, area;

    printf("Valor do raio: ");
    scanf("%f",&raio);

    diametro = raio*2;
    circunferencia = PI*diametro;
    area = PI*(pow(raio,2));

    printf("\nRaio: %.1f\nDiametro: %.1f\nCircunferencia: %.1f\nArea: %.1f", raio, diametro, circunferencia, area);
return (0);
}
