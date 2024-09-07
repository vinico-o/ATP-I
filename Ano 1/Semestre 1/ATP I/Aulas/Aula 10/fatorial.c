#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
    int num, fat=1;

    printf("Digite um número: ");
    scanf("%d",&num);

    for(int k = 1; k <= num; k++){
        fat = fat * k;
    }

    printf("Fatorial: %d",fat);

    return 0;


}
