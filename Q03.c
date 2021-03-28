#include <stdio.h>
#include <stdlib.h>


int main(){

float num;

    printf("Digite um numero ai: ");
    scanf("%f",&num);
    printf("\no dobro de %.2f: %.2f \n\no trplo: %.2f \n\na metade %.2f \n\no triplo da metade %.2f \n ", num, num*2, num*3, num/2, ((num/2)*3));


return (0);
}
