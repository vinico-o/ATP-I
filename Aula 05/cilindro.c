#include<stdio.h>
int main(){
float altura, raio, pi, volume;

pi = 3.141592;

printf("valor da altura do cilindro: ");
scanf("%f",&altura);

printf("valor do raio do cilindro: ");
scanf("%f",&raio);

volume = (pi * raio * raio) * altura;

printf("valor do volume do cilindro %.2f",volume);

return 0;
}

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
