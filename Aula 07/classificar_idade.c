#include <stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL, "Portuguese");

    int idade;

    printf("Programa para classificar uma pessoa pela Idade.");

    printf("Digite a idade da pessoa: ");
    scanf("%d",&idade);

    if (idade >= 5 && idade <= 7){
        printf("Infantil A");
    }

    if (idade >= 8 && idade <= 1){
        printf("Infantil B");
    }

    if (idade >= 11 && idade <= 13){
        printf("Juvenil A");
    }

    if (idade >= 14 && idade <= 17){
        printf("Juvenil B");
    }

    else{
        printf("Adulto");
    }
}
