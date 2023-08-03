#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void FStrings(char *string1, char *string2, int *posicao){
    int i=0, j=0;
    char comeco[50], fim[50];

    printf("\nString1: %s", string1);
    printf("\nString2: %s", string2);
    printf("\nPosição: %i", posicao);

    //String auxiliar inicio
    for(i=0;i<strlen(string1);i++){
        *(comeco+i)=*(string1+i);
        if(i == posicao){
            *(comeco+i)= '\0';
            break;
        }
    }
    //printf("\nTeste Começo: %s", comeco);

    //String auxiliar fim
    for(i=posicao;i<strlen(string1);i++){
        *(fim+j)=*(string1+i);
        j++;
        if(i+1 == strlen(string1)){
            *(fim+j)= '\0';
            break;
        }
    }
    //printf("\nTeste Fim: %s", fim);

    strcpy(string1,strcat(comeco, string2));

    strcpy(string1,strcat(string1, fim));

    printf("\nString final: %s", string1);
}

void main(){
    char string1[50];
    char string2[50];
    int posicao = 1;

    printf("Concatenador de strings");

    printf("\n\nDigite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);
    printf("Digite a posição: ");
    scanf("%i", &posicao);

    while(posicao>0){
        FStrings(string1, string2, posicao);

        printf("\n\nDigite a primeira string: ");
        scanf("%s", string1);
        printf("Digite a segunda string: ");
        scanf("%s", string2);
        printf("Digite a posição: ");
        scanf("%i", &posicao);
    }

        printf("\n\nConcatenador de strings encerrado");
}
