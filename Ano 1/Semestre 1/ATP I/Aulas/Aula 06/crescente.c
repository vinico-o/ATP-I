#include<stdio.h>

//programa para ordenar dois numeros em ordem crescente

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d",&num1);
    
    printf("Digite outro: ");
    scanf("%d",&num2);

    if (num1 != num2) {
        if(num1 > num2){
            printf("Ordem crescente deles: %d %d",num2,num1);
        }

        else {
            printf("Ordem crescente deles: %d %d",num1,num2);
        }
    }

    else {
        printf("Os numeros sao iguais");
    }
}