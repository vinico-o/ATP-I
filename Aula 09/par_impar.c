#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    printf("AO digitar 0 o programa encerrar�");

    int num=1;
    int par=0, impar=0;

    while (num > 0) {
        printf("Digite outro valor: ");
        scanf("%d",&num);

        if(num % 2 == 0){
            par++;
        } else {
            impar++;
        }
    }

printf("\nH� %d n�meros pares.",par);
printf("\nH� %d n�meros �mpares.",impar);

return 0;
}
