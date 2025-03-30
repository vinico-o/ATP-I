#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    printf("AO digitar 0 o programa encerrará");

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

printf("\nHá %d números pares.",par);
printf("\nHá %d números ímpares.",impar);

return 0;
}
