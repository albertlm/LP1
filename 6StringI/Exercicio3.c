#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){
    char stringFrase[100], caracter;
    int i, j=0, tamanhoVetor=0;

    printf("Digite uma string: ");
    scanf("%s",stringFrase);

    printf("Digite um caracter: ");
    scanf(" %c",&caracter);

    for(i=0;i<strlen(stringFrase);i++){
        if(stringFrase[i] == caracter){
            tamanhoVetor = tamanhoVetor+1;
        }
    }

    int vetorIndice[tamanhoVetor];

    for(i=0;i<strlen(stringFrase);i++){
        if(stringFrase[i] == caracter){
            vetorIndice[j] = i;
            j = j+1;
        }
    }

    printf("Indices em que ocorrem o caracter %c: ",caracter);

    for(i=0;i<tamanhoVetor;i++){
        printf("%i ",vetorIndice[i]);
    }
}
