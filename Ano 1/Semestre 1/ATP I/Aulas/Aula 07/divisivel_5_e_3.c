#include<stdio.h>
#include<locale.h>

int main(){
setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um n�mero: ");
    scanf("%d",&numero);

    if ((numero % 3) == 0 && (numero % 5) == 0){
        printf("N�mero divis�vel pelos 2");
    }else{
        printf("N�mero n�o divisivel");
        }
return 0;
}
