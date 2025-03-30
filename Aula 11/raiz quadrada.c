#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){
setlocale (LC_ALL, "portuguese");

    double num;

    printf("Digite um número: ");
    scanf("%lf",&num);

    printf("Raíz quadrada: %lf\n",sqrt(num));
    printf("Prova real: %lf\n",pow(sqrt(num),2));
}