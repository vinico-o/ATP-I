#include<stdio.h>

//programa para classificar produtos com base no valor

int main () {

    float valor;

    printf("Digite valor do produto: ");
    scanf("%f",&valor);

    if (valor < 100) {
        printf("Produto BARATO");
    }

    else {
        if(valor <= 500) {
            printf("Produto NORMAL");
        }

        else {
            printf("Produto CARO");
        }
    }
}