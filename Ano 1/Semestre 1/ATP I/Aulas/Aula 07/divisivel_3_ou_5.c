#include<stdio.h>
#include<locale.h>

int main(){
setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d",&numero);

if((numero % 3) == 0 && (numero % 5) == 0){
        printf("Número divisível por 3 e 5");
}else{
    if ((numero % 3) != 0 && (numero % 5) != 0){
        printf("Número não divisível nem por 3 nem por 5");
    }else{
        if((numero % 3) == 0){
            printf("Número divisível por 3");
        } else{
            printf("Número divisível por 5");
        }
        }
}
return 0;
}

