#include<stdio.h>
#include<locale.h>

int main(){
setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um n�mero: ");
    scanf("%d",&numero);

if((numero % 3) == 0 && (numero % 5) == 0){
        printf("N�mero divis�vel por 3 e 5");
}else{
    if ((numero % 3) != 0 && (numero % 5) != 0){
        printf("N�mero n�o divis�vel nem por 3 nem por 5");
    }else{
        if((numero % 3) == 0){
            printf("N�mero divis�vel por 3");
        } else{
            printf("N�mero divis�vel por 5");
        }
        }
}
return 0;
}

