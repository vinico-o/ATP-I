#include<stdio.h>

//Programa de reajuste de salario dependendo do valor do mesmo

int main () {

    float salario;

    printf("digite o valor do salrio: ");
    scanf("%f",&salario);

    if (salario <= 1000) {
        printf("Novo valor de salario: %.2f", salario + (salario * 0.2));
    }

    else {
        if(salario > 2000) {
            printf ("Nao houve reajuste");
        }

        else {
            printf ("Novo valor de salario: %.2f", salario + (salario * 0.1));
        }
    }
}