#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
    int par=0, impar=0, cont=0;
    int num;

    do {
        printf("digite o %d° número: ",cont+1);
        scanf("%d", &num);

        cont++;

        if(num % 2 == 0 && num != 0){
            par++;
        } else{
            impar++;
        }
    } while(num != 0);

    printf("numero de pares = %d\n",par);
    printf("numero de impares = %d",impar);

    return 0;
}
