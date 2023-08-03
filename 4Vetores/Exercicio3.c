#include <stdio.h>
#include <stdlib.h>

void main(void){
    int VetorA[25], VetorB[25], VetorC[50], i, auxA=0, auxB=0;

    for (i=0; i<25; i++){
        printf("Digite o valor %d do vetor A: ", i+1);
        scanf("%d", &VetorA[i]);
    }

    printf("\n");

    for (i=0; i<25; i++){
        printf("Digite o valor %d do vetor B: ", i+1);
        scanf("%d", &VetorB[i]);
    }

    for (i=0; i<50; i++){
        if(i%2 == 0){
            VetorC[i] = VetorA[auxA];
            auxA++;
        }else{
            VetorC[i] = VetorB[auxB];
            auxB++;
        }
    }

    printf("\nVetor C:\n");
    for(i=0; i<50; i++){
        printf("%d\n", VetorC[i]);
    }
}
