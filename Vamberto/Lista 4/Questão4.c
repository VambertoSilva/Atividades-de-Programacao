#include <stdio.h>


int main(){

    printf("Tabuada\n");

    //declarando variaveis
    int resultado;

    for(int i = 1;i <= 5 ; i++){

        for(int b = 1; b <= 10; b++){
            resultado = i * b;
            printf("\n  %d x %d = %d", i, b, resultado);
        }

        printf("\n");
    }

    return 0;
}