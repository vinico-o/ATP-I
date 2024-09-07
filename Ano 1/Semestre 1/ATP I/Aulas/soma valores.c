#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
    int cont=0;
    float num, soma=0;

    do{
        printf("digite um n�mero: ");
        scanf("%f",&num);
        soma = soma + num;
        cont ++;
    } while(cont < 5);

    printf("M�dia = %.2f",soma/5.0);

    return 0;
}
