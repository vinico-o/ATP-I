#include<stdio.h>
int main () {

//declara��o de vari�veis
float v1, v2, v3, premio;

//entrada de dados e leitura
printf("valor premio: ");
scanf("%f",&premio);

printf("valor investido 1: ");
scanf("%f",&v1);

printf("valor investido 1: ");
scanf("%f",&v2);

printf("valor investido 1: ");
scanf("%f",&v3);

//sa�da de dados junto com a opera��o
printf("o valor retornado 1: %.2f\n", premio * v1 / (v1+v2+v3));
printf("o valor retornado 2: %.2f\n", premio * v2 / (v1+v2+v3));
printf("o valor retornado 3: %.2f", premio * v3 / (v1+v2+v3));

 return 0;
}
