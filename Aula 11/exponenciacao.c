#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale (LC_ALL, "portuguese");

    double num, exp;

    printf("Digite o número: ");
    scanf("%lf",&num);
    printf("Digite o expoente: ");
    scanf("%lf",&exp);

    printf("Resultado: %lf",pow(num,exp));
}