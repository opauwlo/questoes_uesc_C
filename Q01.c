#include <stdio.h>
#include <stdlib.h>

int main () {

char name[61];
int num, DDD;

fflush(stdin);

printf("\nDigite o nome: ");
gets(name);
fflush(stdin);
printf("\nDigite o DDD: ");
scanf("%d",&DDD);
printf("\nDigite o telefone: ");
scanf("%d",&num);

printf("\nNOME: %s \nTELEFONE: (%d) %d \n",name, DDD, num);

return (0);
}
