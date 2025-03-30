#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");

    int R, num, mult;

    for (num = 0; num <= 1000;  num++){
        for(mult = 1; mult <= 1000; mult++){
            R = num * mult;
            printf("%d x %d = %d\n",num, mult, R);
        }
    }
}