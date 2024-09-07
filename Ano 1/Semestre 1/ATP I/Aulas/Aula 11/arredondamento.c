#include <stdio.h>
#include <locale.h>
#include<math.h>

int main (){
setlocale (LC_ALL, "portuguese");

    double num;

    printf("Digite um número: ");
    scanf("%lf",&num);


    printf("Ceil: %lf\n",ceil(num));
    printf("Floor : %lf\n",floor(num));
    printf("Round : %lf\n",round(num));
    printf("Trunc : %lf\n",trunc(num));
}
