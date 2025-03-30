#include<stdio.h>

//Prgrama para fazer a media e verifica se a nota se enquadra

int main (){
    float num1, num2;

    printf("digite o valor da nota 1: ");
    scanf("%f",&num1);

    printf("digite o valor da nota 2: ");
    scanf("%f",&num2);

    if(num1 >= 0 && num1 <= 10 && num2 >= 0 && num2 <= 10){
        printf("Media: %.2f",(num1 + num2)/2);
    }
    else{
        if (num1 > 10 || num1 < 0) {
            printf("valor da nota 1 incorreto");
        } else{
            printf("Valor da nota 2 incorreto");
        }
    }
}
