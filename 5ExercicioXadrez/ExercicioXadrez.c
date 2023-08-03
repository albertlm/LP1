#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(void){
    int lin, col;
    int tab[8][8] = {{6,0,0,5,0,0,1,0},
                     {0,1,0,2,0,3,0,2},
                     {0,1,1,1,0,1,0,0},
                     {0,0,2,0,3,4,4,3},
                     {1,0,1,1,0,1,0,0},
                     {0,0,1,3,0,4,0,1},
                     {1,0,0,0,2,2,2,1},
                     {1,5,0,6,0,1,1,0}};
    int resultado[7] = {0,0,0,0,0,0,0};
    setlocale(LC_ALL, "Portuguese");

    /*for(lin=0;lin<8;lin++){
        for(col=0;col<8;col++){
            scanf("%d",&tab[lin][col]);
        }
    }*/

    printf("LEGENDA\n\n1 - PEÕES\n2 - CAVALOS\n3 - TORRES\n4 - BISPOS\n5 - REIS\n6 - RAINHAS\n0 - AUSẼNCIA DE PEDRAS\n");

    for(lin=0;lin<=7;lin++){
        printf("\n");
        for(col=0;col<=7;col++){
            printf("%d ",tab[lin][col]);
        }
    }

    for(lin=0;lin<=7;lin++){
        for(col=0;col<=7;col++){
            switch(tab[lin][col]){
                case 1:
                    resultado[0] = resultado[0] + 1;
                    break;
                case 2:
                    resultado[1] = resultado[1] + 1;
                    break;
                case 3:
                    resultado[2] = resultado[2] + 1;
                    break;
                case 4:
                    resultado[3] = resultado[3] + 1;
                    break;
                case 5:
                    resultado[4] = resultado[4] + 1;
                    break;
                case 6:
                    resultado[5] = resultado[5] + 1;
                    break;
                case 0:
                    resultado[6] = resultado[6] + 1;
                    break;
            }
        }
        }
        for(lin=0;lin<8;lin++){
            switch(lin){
                case 1:
                    printf("\n\nPEÕES: %d", resultado[0]);
                    break;
                case 2:
                    printf("\nCAVALOS: %d", resultado[1]);
                    break;
                case 3:
                    printf("\nTORRES: %d", resultado[2]);
                    break;
                case 4:
                    printf("\nBISPOS: %d", resultado[3]);
                    break;
                case 5:
                    printf("\nREIS: %d", resultado[4]);
                    break;
                case 6:
                    printf("\nRAINHAS: %d", resultado[5]);
                    break;
                case 7:
                    printf("\nCASAS VAZIAS: %d\n", resultado[6]);
                    break;
            }
        }
}
