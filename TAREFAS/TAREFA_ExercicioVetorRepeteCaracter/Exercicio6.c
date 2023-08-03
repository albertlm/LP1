#include <stdio.h>
#include <stdlib.h>

void main(void){
    int vetorInteiros[6], index, aux;
    char vetorCaracteres[6];

    for(index=0;index<6;index++){
        printf("Valor n da posição %i: ", index+1);
        scanf("%i",&vetorInteiros[index]);
    }

    printf("\n");

    for(index=0;index<6;index++){
        printf("Caracter c da posição %i: ", index+1);
        scanf(" %c",&vetorCaracteres[index]);
    }

    printf("\n");

    for(index=0;index<6;index++){
        for(aux=0;aux<vetorInteiros[index];aux++){
            printf(" %c",vetorCaracteres[index]);
        }
        printf("\n");
    }
}
