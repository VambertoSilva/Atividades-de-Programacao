#include <stdio.h>

int main(){



    //declarando váriaveis
    int ValorDigitadoPeloUsuario, RepeticoesAsteristico;
    RepeticoesAsteristico = 1;
    


     printf("Digite o numero de linhas: ");
     scanf("%d", &ValorDigitadoPeloUsuario);
  
    for(int b = 1; b <= ValorDigitadoPeloUsuario; b++){


        for(int i = 1; i <= RepeticoesAsteristico; i++){
 
            printf("*");
        }
        
        printf("\n");
        RepeticoesAsteristico++;
    
    }
    return 0;
}