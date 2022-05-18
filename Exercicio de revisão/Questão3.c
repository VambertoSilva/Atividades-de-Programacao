#include <stdio.h>


// O programa vai pegar um numero decimal e arredondar para o numero inteiro mais próximo abaixo dele. 

int main(void){

//Declarando variaveis
float Numerodigitado = 0;
int i, Numeroarredondado = 0;

//Entrada de dados e saida
for(i = 0; i < 1000; i++){

    // Entrada de dados
    printf("\n\nEscreva o numero decimal: \n");
    scanf("%f", &Numerodigitado);

    //Arendodamento
    Numeroarredondado = Numerodigitado; 

    //saida de dados
    printf("O numero digitado e: %0.2f\n", Numerodigitado);
    printf("O numero arredondado e: %d", Numeroarredondado);
}


// ("*"); &

return 0;
}