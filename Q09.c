#include <stdio.h>
#include <stdlib.h>

int main(){

int hora, minuto, segundo, tempo;

    scanf("%d",&tempo);

    if (tempo<=86400 && tempo>0)
    {
    hora = tempo/3600;
    if (hora<10)
    {
    printf("0%d:",hora);
    }
    else
    {
    printf("%d:",hora);
    }
    tempo = tempo%3600;
    minuto = tempo/60;
    if (minuto<10)
    {
    printf("0%d:",hora);
    }
    else
    {
    printf("%d:",minuto);
    }
    tempo = tempo%60;
    segundo = tempo;
    if (segundo<10)
    {
    printf("0%d",segundo);
    }
    else
    {
    printf("%d",segundo);
    }


    }
    else
    {
    printf("\nERROR\n\nDigite um numero maior que 0 e menor ou igual 86400\n\n");

    }

return (0);
}
