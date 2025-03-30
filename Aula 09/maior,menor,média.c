#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    int num, num2;
    int cont=1;
    int menor, maior;
    int soma;

    printf("Digite o 1° número: ");
    scanf("%d",&num);

    menor =  num;
    maior = num;
    soma = num;

    while(cont < 5){

        printf("Digite o %d° numero: ",cont+1);
        scanf("%d",&num2);

        soma = soma + num2;

        cont++;

        if(num2 >= num){
            maior = num2;
        }
        if(num2 <= num){
            menor = num2;
        }
    }

printf("\nMaior: %d",maior);
printf("\nMenor: %d",menor);
printf("\nMédia: %.2f",soma/5.0);
}
