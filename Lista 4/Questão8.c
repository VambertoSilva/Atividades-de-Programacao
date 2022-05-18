#include <stdio.h>


int main(){




    //Declarando Variaveis
    float ValorDigitado, Rendimento1, Rendimento2, Rendimento3;

    do{
        printf("\n\n\n\nDigite o valor do seu investimento: ");
        scanf("%f", &ValorDigitado);

        Rendimento1 = ValorDigitado * 0.005;
        Rendimento2 = ValorDigitado * 0.01;
        Rendimento3 = ValorDigitado * 0.015;

        printf("\nDescricao                     Rendimento por mes");
        printf("\n\nPoupanca                      R$ %0.2f", Rendimento1);
        printf("\nFundo de Renda Fixa           R$ %0.2f", Rendimento2);
        printf("\nCDBs                          R$ %0.2f", Rendimento3);

    }while(ValorDigitado > 0);

    return 0;
}