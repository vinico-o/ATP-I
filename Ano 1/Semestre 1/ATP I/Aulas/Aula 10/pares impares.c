#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");
    int par=0, impar=0;
    int num;

    for(int cont = 0; num != 0; cont ++){
        printf("digite o %d° número: ",cont+1);
        scanf("%d", &num);

        if(num % 2 == 0 && num != 0){
            par++;
        } else{
            impar++;
        }
    }

    printf("numero de pares = %d\n",par);
    printf("numero de impares = %d",impar);

    return 0;
}
