#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main (){
    setlocale (LC_ALL, "portuguese");

    srand(time(NULL));

    int num[100];
    int possib[6];

    for(int i = 0; i < 6; i++){
        possib[i] = 0;
    }

    for(int i = 0; i < 100; i++){
        num[i] = rand() % 6 + 1;
        printf("%d ",num[i]);

        switch(num[i]){
            case 1:
                possib[0] += 1;
                break;
            case 2:
                possib[1] += 1;
                break;
            case 3:
                possib[2] += 1;
                break;
            case 4:
                possib[3] += 1;
                break;
            case 5:
                possib[4] += 1;
                break;
            case 6:
                possib[5] += 1;
                break;
        }
    }

    printf("\n");

    for(int i = 0; i < 6; i++){
        printf("O numero %d caiu %d vezes\n", i+1, possib[i]);
    }

    return 0;
}
