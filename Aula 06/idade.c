#include<stdio.h>

//programa para verificar maioridade da pessoa

int main () {

    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d",&idade);

    if (idade >= 18) {
        printf("Maior de idade");
    }

    else {
        printf("Menor de idade");
    }

    return 0;
}