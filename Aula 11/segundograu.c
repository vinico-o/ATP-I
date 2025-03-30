#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale (LC_ALL, "portuguese");

    double a, b, c;
    double delta, bhaskara;

    printf("digite a equação: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    delta = (pow(b,2) - 4*a*c);

    if(delta > 0){
        printf("duas raízes possíveis");
        bhaskara = ((-b + sqrt(delta))/2*a);
        printf("x1: %lf",bhaskara);
        bhaskara = ((-b - sqrt(delta))/2*a);
        printf("x2: %lf",bhaskara);
    } else if(delta < 0){
        printf("Sem raízes reais");
    } else {
        printf("duas raízes iguais");
        bhaskara = ((-b + sqrt(delta))/2*a);
        printf("x1 = x2: ",bhaskara);
    }

}