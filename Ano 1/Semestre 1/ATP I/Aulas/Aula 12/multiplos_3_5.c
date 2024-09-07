#include<stdio.h>
#include<locale.h>

int main(){
setlocale (LC_ALL, "portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d",&num);
    
    for(int cont = 3; cont <= num; cont ++){
        if(cont % 3 == 0 || cont % 5 == 0){
            printf("%d é divisível por 3 ou 5.\n",cont);
        }
    }

    return 0;

}