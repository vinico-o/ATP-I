#include <stdio.h>
#include <locale.h>
#include<math.h>

int main (){
setlocale (LC_ALL, "portuguese");

    double angulo, rad, pi = 3.14159;

    printf("Digite o ângulo desejado: ");
    scanf("%lf",&angulo);

    rad = angulo * pi / 180;

    printf("Seno : %.2lf\n",sin(rad));
    printf("Cosseno : %.2lf\n",cos(rad));
    printf("Tangente : %.2lf\n",tan(rad));
}