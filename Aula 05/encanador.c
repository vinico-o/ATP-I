#include<stdio.h>
int main () {
float dias, desconto, valor;

printf("numero de dias trabalhados: ");
scanf("%f",&dias);

printf("o valor bruto: %.2f\n", dias * 30);
printf("desconto %.2f\n", (dias * 30) * 0.08);
printf("valor liquido: %.2f", (dias * 30) - (dias * 30 * 0.08));

return 0;
}
