#include <stdio.h>
#include <stdlib.h>

float media (float nota_1, float nota_2, float nota_3)
{

float resultado;
resultado = ((nota_1+nota_2+nota_3)/3);

return resultado;
}

int main(){

float res, n1, n2, n3;

printf("Digite a primeira nota: ");
scanf("%f",&n1);

printf("Digite a segunda nota: ");
scanf("%f",&n2);

printf("Digite a terceira nota: ");
scanf("%f",&n3);

res = media(n1,n2,n3);

printf("A media do aluno é: %.2f", res);

return (0);
}
