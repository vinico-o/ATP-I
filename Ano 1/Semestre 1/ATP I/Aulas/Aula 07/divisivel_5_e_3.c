#include<stdio.h>
#include<locale.h>

int main(){
setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d",&numero);

    if ((numero % 3) == 0 && (numero % 5) == 0){
        printf("Número divisível pelos 2");
    }else{
        printf("Número não divisivel");
        }
return 0;
}
