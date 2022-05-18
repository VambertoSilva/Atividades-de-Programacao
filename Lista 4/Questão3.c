#include <stdio.h>


int main(){


    //Declarando váriaveis
    int resultado, ValorDigitadoPeloUsuario;
    printf("Tabuada");

    printf("\nDigite um numero: ");
    scanf("%d", &ValorDigitadoPeloUsuario);

    for(int i = 1; i <= 10; i++){
        resultado = ValorDigitadoPeloUsuario * i;
        printf("\n %d x %d = %d", ValorDigitadoPeloUsuario, i, resultado); 
    }

    return 0;
}