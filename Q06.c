#include <stdio.h>
#include <stdlib.h>

int main(){
int quanti_alunos, ap=0, rp=0, sexo, sexoF=0, sexoM=0,situ, op=0;
float pM, pF, pAP;
char nome;


    for (int i=1; i<=1000; i++)
    {
        printf("Nome: ");
        scanf("%s",&nome);
        printf("\n\nQual o Sexo Da(o) aluna(o)?\n");
        printf("\n\nSexo Masculino digite 1\nSexo Feminino Digite 2\n");
        scanf("%d",&sexo);
        printf("\nSituacao Da(o) aluna(o)");
        printf("\n\nApravoda(o) Digite 1\n\nReprovada(o) Digite 2\n");
        scanf("%d",&situ);
        printf("\nDigite 1 para adcionar mais alunos ou 0 para sair.\n");
        scanf("%d",&op);
        quanti_alunos = i;
        if (op ==0)
        {
            i=1000;
        }


        if(sexo ==1)
        {
            sexoM = sexoM+1;
        }
        else
        {
            sexoF = sexoF+1;
        }

         if(situ == 1)
        {
            ap = ap+1;
        }
        else
        {
            rp = rp+1;
        }

        pM = (100*sexoM)/quanti_alunos;
        pF = (100*sexoF)/quanti_alunos;
        pAP = (100*rp)/(ap+rp);
    }
    printf("Porcentagem sexo Feminino %.2f\n\nPorcentagem sexo Masculimo %.2f\n\n Porcentagem Reporovados %.2f",pF,pM,pAP);
return (0);
}
