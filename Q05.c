#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, porcentagem, res=0;
    int mes;

    printf("Valor de entrada: ");
    scanf("%f",&valor);
    printf("porecentagem ao mes: ");
    scanf("%f",&porcentagem);
    printf("quantos meses será simulado? ");
    scanf("%d",&mes);

    for (int i=1; i<=mes; i++ )
    {
        valor = valor+valor*(porcentagem/100);

        printf("\nGanho do mes %d = %.2f\n\n ", i, valor);


    }

return (0);
}
