#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    unsigned long int num;
    int fat=1, k=1;

    printf("Digite o n�mero para fazer o fatorial: ");
    scanf("%d",&num);

    while (k < num){
        k++;
        fat *= k;
    }

printf("\nFatorial �: %d",fat);

return 0;

}
