#include <stdio.h>


int main( void){

    int i;

    for(i = 0; i < 1000; i++ ){

        if(( i% 10 ) == 0)
            printf("\n");
        printf("*");
    }


    return 0;
}