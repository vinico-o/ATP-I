#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

        int num, qntd;
        int cont=0, soma=0;

        printf("Digite a quantidade de números: ");
        scanf("%d",&qntd);

        while(cont < qntd){
            printf("Digite o %d° numero: ",cont+1);
            scanf("%d",&num);

            soma = soma + num;
            cont++;
        }

        printf("\nSoma dos valores: %d",soma);
        printf("\nMédia dos valores: %f.2",soma / (float)qntd);
return 0;
}
