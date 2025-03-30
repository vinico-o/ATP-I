#include<stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL,"Portuguese");

    float lado1,lado2,lado3;

    printf("Digite os lado do triangulo: ");
    scanf("%f%f%f",&lado1,&lado2,&lado3);

if (lado1 == lado2 && lado1 == lado3){
    printf("Triangulo Equilátero");
} else {
    if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)) {
        printf("Triângulo Isóceles");
    } else {
        printf("triângulo Escaleno");
    }
}

return 0;
}
