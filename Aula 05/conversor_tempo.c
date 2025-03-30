#include<stdio.h>

int main() {

float seg, min, hora, dia;
int num;

printf("digite o valor inteiro: ");
scanf("%d",&num);

dia = num / (24*3600);
hora = num % (24*3600) / 3600;
min = num % 3600 / 60;
seg = num % 3600 % 60;

printf("o valor em dias: %.2f\n",dia);
printf("o valor em segundos: %.2f\n",seg);
printf("o valor em minutos: %.2f\n", min);
printf("o valor em horas: %.2f\n", hora);

return 0;
}
