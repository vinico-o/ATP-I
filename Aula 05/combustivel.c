#include<stdio.h>
int main() {
float dist, comb, preco, total;

printf("Qual a distancia percorrida: ");
scanf("%f",&dist);

printf("Quanto de combustivel utilizado: ");
scanf("%f",&comb);

printf("Qual o preco do combustivel: ");
scanf("%f",&preco);

total = dist/comb * preco;
printf("o valor total: %.2f",total);
}
