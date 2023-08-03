#include <stdio.h>
#include <stdlib.h>

void main(void){
    int VetorA[20], VetorB[20], VetorC[20], i;

    for (i=0; i<20; i++){
        printf("Digite o valor %d do vetor A: ", i+1);
        scanf("%d", &VetorA[i]);
    }

    printf("\n");

    for (i=0; i<20; i++){
        printf("Digite o valor %d do vetor B: ", i+1);
        scanf("%d", &VetorB[i]);
    }

    for (i=0; i<20; i++){
        VetorC[i] = VetorA[i] + VetorB[i];
    }

    printf("\nVetor C:\n");
    for(i=0; i<20; i++){
        printf("%d\n", VetorC[i]);
    }
}
