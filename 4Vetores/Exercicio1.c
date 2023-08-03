#include <stdio.h>
#include <stdlib.h>

void main(void){
    int VetorA[10], VetorB[10], i, aux=0;

    for (i=0; i<10; i++){
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &VetorA[i]);
    }

    for(i=9; i>=0; i--){
        VetorB[aux] = VetorA[i];
        aux++;
    }

    printf("\nVetor A:\n");
    for(i=0; i<10; i++){
        printf("%d\n", VetorA[i]);
    }

    printf("\n\nVetor B:\n");
    for(i=0; i<10; i++){
        printf("%d\n", VetorB[i]);
    }
}
