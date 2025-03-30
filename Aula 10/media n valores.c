#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
    int qntd;
    float num, soma=0;

    printf("digite o número de valores: ");
    scanf("%d",&qntd);

    for(int cont = 0; cont < qntd; cont++){
        printf("digite o %d° número: ",cont+1);
        scanf("%f",&num);

        soma = soma + num;
    }
    printf("Média = %.2f",soma/5);

    return 0;

}

