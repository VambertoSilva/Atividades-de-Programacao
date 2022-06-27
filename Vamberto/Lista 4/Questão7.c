#include <stdio.h>


int main(){

    //Declarando Váriaveis
    int ValorDigitado, MaiorNumero;
    MaiorNumero = -32768; 
    

    for(int i = 1; i <= 10; i++){

        printf("\nDigite um numero: ");
        scanf("%d", &ValorDigitado);

        if(ValorDigitado >  MaiorNumero){

            MaiorNumero = ValorDigitado;
        }


    }

    printf("\n O Maior numero e: %d", MaiorNumero);

    return 0;
}