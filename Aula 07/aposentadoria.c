#include<stdio.h>

int main () {

    int idade, trab;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite o tempo trabalhado: ");
    scanf("%d",&trab);

    if (trab > idade) {
        printf("ta chapano");
    }else {
        if((idade >= 65) || (trab > 30) || (idade >= 60 && trab > 25)) {
            printf("Aposentado");
        } else {
            printf("Não aposentado");
        }
    }

    return 0;
}