#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
    float num, soma=0;

    for(int cont = 0; cont < 5; cont++){

        printf("digite o %d� n�mero: ",cont+1);
        scanf("%f",&num);

        soma = soma + num;
    }

    printf("M�dia = %.2f",soma/5.0);

    return 0;
}

