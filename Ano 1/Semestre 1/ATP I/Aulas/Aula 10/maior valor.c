#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
    int num, soma=0, maior, menor;

    printf("digite um número: ");
    scanf("%d",&num);

    maior = num;
    menor = num;
    soma = soma + num;

    for(int cont = 0; cont < 4; cont++){
        printf("digite um número: ");
        scanf("%d",&num);

        soma = soma + num;

        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
    }

    printf("Soma: %d\nmaior: %d\nmenor: %d\nmédia: %.2f",soma, maior, menor, (float)soma/5);
}
