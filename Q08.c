#include <stdio.h>
#include <stdlib.h>

int main(){
char nome;
int vitoria, derrota, empate,pg=0,pp=0,pt;

    scanf("%s",&nome);
    fflush(stdin);
    scanf("%d",&vitoria);
    scanf("%d",&derrota);
    scanf("%d",&empate);

    derrota = derrota*3;
    vitoria = vitoria*3;

    pg= vitoria+empate;
    pp= derrota+empate;
    pt = pp+ pg;
    printf(" %d, %d, %d",pg,pp,pt);
return (0);
}
