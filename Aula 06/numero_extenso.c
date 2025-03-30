#include<stdio.h>

int main (){
    int numero;

    printf("digite um numero de um a cinco: ");
    scanf("%d",&numero);

    if (numero == 5) {
        printf("cinco");
    }
    else {
        if (numero == 4) {
            printf("quatro");
        }

        else {
            if (numero == 3) {
                printf("tres");
            }
            else {
                if (numero == 2) {
                    printf("dois");
                }
                else{
                    if (numero == 1){
                        printf("um");
                    }

                    else {
                        printf("numero nao esta entre 1 e cinco");
                    }
                }
            }
        }

    }
}
