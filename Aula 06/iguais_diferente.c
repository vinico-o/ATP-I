#include<stdio.h>

//programa para verificar se os numeros sao iguais ou diferentes

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d",&num1);
    
    printf("Digite outro: ");
    scanf("%d",&num2);

    if (num1 == num2) {
        printf("Os numeros sao iguais");
    }

    else {
        printf("Os numeros sao diferentes");
    }
}