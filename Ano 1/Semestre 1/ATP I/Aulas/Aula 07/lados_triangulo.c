#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("Digite os lados do triangulo: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a < b + c && b < a + c && c < a + b){
        printf("Tri�ngulo poss�vel");
    }else{
        printf("Tri�ngulo imposs�vel");
        }

}
