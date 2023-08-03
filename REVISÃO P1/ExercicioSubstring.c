#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring(char entrada[20], int inicio, int fim){
    int i;
    char stringDestino[20];
    int aux=0;

    for(i=inicio;i<=fim;i++){
        stringDestino[aux] = entrada[i];
        aux = aux + 1;
    }

    stringDestino[i] = '\0';

    printf(stringDestino);
}

void main(){
    char palavra[20];

    int posInicial, posFinal;

    printf("Digite a palavra: ");
    gets(palavra);
    printf("Digite a posicao inicial: ");
    scanf("%i", &posInicial);
    printf("Digite a posicao final: ");
    scanf("%i", &posFinal);

    substring(palavra, posInicial, posFinal);
}
