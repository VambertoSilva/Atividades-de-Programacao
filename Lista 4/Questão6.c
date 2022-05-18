#include <stdio.h>

int main(){



    //declarando váriaveis
    char Letra = 'A';
    int ValorDigitado, Repeticao;
    Repeticao = 1;

    printf("Digite O numero de linhas: ");
    scanf("%d", &ValorDigitado);

    for(int b = 1; b <= ValorDigitado; b++){


        for(int i = 1; i <= Repeticao; i++){

        printf("%c", Letra);

        }   

        Letra++;
        Repeticao++;
        printf("\n");

    }
     
    
    
    return 0;
}