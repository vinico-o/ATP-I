#include<stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL, "portuguese");

    int a = 1, b = 1, h, num;

    printf("Escolha o n° número de fibonacci: ");
    scanf("%d",&num);

    printf("O 1° número da sequência é: 1\n");
    printf("O 1° número da sequência é: 1\n");

    for(int cont = 3; cont <= num; cont++){
        h = a + b;
        a = b;
        b = h;

        printf("O %d° número da sequência é: %d\n",cont, h);
    }

}
