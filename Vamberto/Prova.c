//# ( ) &
#include <stdio.h>

int main (void){

// receber o numero de carros e a quantidade de horas de cada carro. E então vai exibir um valor

    //Declarar váriaveis
    int carros = 0;
    float totalv = 0;
    float totalh = 10;

    //Digitar a quantidade de carros
    printf("Digite a quantatidade de carros: ");
    scanf("%d", &carros);

    //Vetor do valor dos carros
    float valor[carros]; 
    float horas[carros]; 
    float horasbackup[carros];


    //Loop de calculo 
    for( int i = 0; i < carros; i++ ){

        valor[i] = 0;
        horas[i] = 0;
        horasbackup[i] = 0;

        totalh = horas[i] + totalh;
        // printf("%d\n", i );

        //Digitar a quantidade de horas
        printf("\nDigite a quantidade de horas do carro %d: ", i);
        scanf("%f", &horas[i]);

        horasbackup[i] = horas[i];

        // printf("horas %d: %.2f", i, horas[i]);

        //Calcular valor

        //Verificar quantos dias se passaram
        if(horas[i] >= 24 ){

            int arredondar = 0;
            arredondar = horas[i] / 24;
            valor[i] = arredondar * 15;
        }

        //adicionar o valor inicial
        horas[i] = horas[i] - 3;
        valor[i] = valor[i] + 2;

        while(horas[i] > 0){
            horas[i] = horas[i] - 1;
            valor[i] = valor[i] + 1;
        }

        // printf("\n\nValor: %.2f\n\n", valor[i]);

        // if(horas > 0){
        // int horascima = horas[i] + 1;
        // valor[i] += horascima;
        // }

        
    } 

    printf("\n\nCarro        Horas       Valor\n");
    for( int b = 0; b < carros; b++){

      printf("%d            %.2f         %.2f\n", b, horasbackup[b], valor[b]);
    }
    
    printf("\nTotal        %.2f       %.2f\n", totalh, totalv);

return 0;
}
