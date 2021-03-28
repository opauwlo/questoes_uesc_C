#include <stdio.h>
#include <stdlib.h>

int main(){
float mochilas, isquerios, chienlos, total;

    scanf("%f",&mochilas);
    scanf("%f",&isquerios);
    scanf("%f",&chienlos);

    mochilas = mochilas*25.00;
    isquerios = isquerios*2.00;
    chienlos = chienlos*7.00;

    total = mochilas+isquerios+chienlos;

    printf("Faturamento: \n\nMochilas = %.2f\nIsqueiros = %.2f\nChinelos = %.2f\n\nTotal = %.2f",mochilas,isquerios,chienlos,total);

return (0);
}
