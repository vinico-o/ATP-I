#include<stdio.h>
#include<locale.h>
int main()
{
    float nota1, nota2, media;
    printf("escreva a nota 1: ",("reais"));
    scanf("%f",&nota1);

    printf("escreva a nota 2: ");
    scanf("%f",&nota2);

media = (nota1 + nota2) / 2;

printf("Sua média é: %.2f",media);
    return 0;
}
