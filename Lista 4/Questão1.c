#include <stdio.h>

int main(){

    // Declarando váriaveis
    int teste, ValorDigitadoPeloUsuario;

    // Inicializando teste || Lembre que em c o numero 0 equivale a falso e qualquer numero diferente de 0 é verdadeiro.
    teste = 1;
    while(teste){
      printf("Digite um valor entre 1 e 100: ");
      scanf("%d", &ValorDigitadoPeloUsuario);

      if(ValorDigitadoPeloUsuario >= 1 && ValorDigitadoPeloUsuario <= 100){
          printf("\nValor digitado esta correto");
          teste = 0;
      }else{
          printf("\nValor digitado incorreto. Por favor digite novamente\n"); 
      }

    }
    
    return 0; 
}