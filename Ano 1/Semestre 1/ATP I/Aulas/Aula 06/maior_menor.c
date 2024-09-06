#include<stdio.h>

int main (){
    int num1, num2;

    printf("escreva um numero: ");
    scanf("%d",&num1);

    printf("escreva outro numero: ");
    scanf("%d",&num2);

    if (num1 == num2) {
        printf("%d e igual a %d",num1, num2);
    }
    else {
        if (num1 > num2) {
            printf(" %d e maior que %d",num1,num2);
            printf("\nDiferenca entre eles: %d",num2-num1);
        }
        else {
            printf(" %d e maior que %d",num2,num1);
            printf("\nDiferenca entre eles: %d",num1-num2);
        }
    }
    return 0;
}
