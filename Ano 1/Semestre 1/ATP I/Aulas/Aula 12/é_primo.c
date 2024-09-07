#include <stdio.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    int num, cont = 2, primo = 1;

    printf("Digite um número: ");
    scanf("%d",&num);
    
    if(num == 1){
        printf("não é primo.");
    } else {
        while (cont < num){
            if(num % cont == 0){
                primo = 0;
                break;
            }
            
            cont++;
        }
    }
    
    if (primo == 0){
        printf("não é primo");
    } else {
        printf("é primo");
    }
    
}