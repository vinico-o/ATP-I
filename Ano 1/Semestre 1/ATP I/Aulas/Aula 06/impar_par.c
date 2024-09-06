#include<stdio.h>

int main (){
    int numero;
    printf("escreva um nuemro: ");
    scanf("%d",&numero);

    if (numero % 2 == 1){
        printf ("numero impar");
    }
    else {
        printf("numero par");
    }
    return 0;
}
