#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
    int qntd;
    float num, soma=0;

    printf("digite o n�mero de valores: ");
    scanf("%d",&qntd);

    for(int cont = 0; cont < qntd; cont++){
        printf("digite o %d� n�mero: ",cont+1);
        scanf("%f",&num);

        soma = soma + num;
    }
    printf("M�dia = %.2f",soma/5);

    return 0;

}

