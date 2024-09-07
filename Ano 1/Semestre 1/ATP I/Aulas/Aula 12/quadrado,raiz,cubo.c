#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){
    setlocale (LC_ALL, "portuguese");

    double num;
    int cont = 0;

    printf("Digite uma sequencia de números, o programa mostrará o quadrado, o cubo e a raíz\n");

    do {
        
        printf("digite o %d° número: ",cont + 1);
        scanf("%lf",&num);

        if (num > 0){

        printf("Quadrado: %lf\n",pow(num,2));
        printf("Cubo: %lf\n",pow(num,3));
        printf("Raiz: %lf\n",sqrt(num));
        }

        cont++;

    } while (num > 0);

    printf("Programa finalizado");

    return 0;
}