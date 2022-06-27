#include <stdio.h>


// Um programa que recebe um numero de 3 algarismo e verifica se ele é um palindromo, para ser um palindromo, o primeiro algarismo e o ultimo tem que ser iguais.

int main ( void){



    //Declaração de váriaveis
    int Numerodigitado =0, Numero1 = 0;
    int Numero2 = 0, Numero3 = 0;

    //Entrada de dados
    printf("Digite o numero: ");
    scanf("%d",&Numerodigitado);

    //Split do numero digitado;
    Numero1 = Numerodigitado / 100;
    Numero2 = (Numerodigitado % 100) / 10;
    Numero3 = Numerodigitado % 10;

    if(Numero1 == Numero3){
        printf("\nNumero e um palindromo");
    }else{
        printf("\nNumero nao e um palindromo ");
    }


    // ("*"); &
    return 0; 
}