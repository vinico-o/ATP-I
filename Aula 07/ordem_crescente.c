#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("Digite tres números ");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b && b > c){
        printf("Ordem crescente: %d %d %d", a, b, c);
    }
    else if(a > c && c > b){
        printf("Ordem crescente: %d %d %d", a, c, b);
    }
    else if(b > a && a > c){
        printf("Ordem crescente: %d %d %d", b, a, c);
    }
    else if(b > c && c > a){
        printf("Ordem crescente: %d %d %d", b, c, a);
    }
    else if(c > a && a > b){
        printf("Ordem crescente: %d %d %d", c, a, b);
    }
    else if(c > b && b > a){
        printf("Ordem crescente: %d %d %d", c, b, a);
    }
    
    return 0;
}
