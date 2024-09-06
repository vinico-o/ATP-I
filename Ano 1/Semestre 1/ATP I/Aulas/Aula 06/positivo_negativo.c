#include<stdio.h>

int main () {
    
    float num;

    printf("Digite um numero inteiro: ");
    scanf("%f",&num);

    if (num >= 0) {
        printf("Numero positivo");
    }

    else {
        printf("Numero negativo");
    }
}