#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){
    char caracter, palavra[100];
    int i, contador = 0;


    printf("Informe uma palavra: ");
    scanf("%s",palavra);

    for(i=0;i<strlen(palavra);i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            contador= contador +1;
        }
    }

    printf("Quantidade de vogais: %i",contador);

    printf("\nInforme um caracter: ");
    scanf(" %c",&caracter);

    for(i=0;i<strlen(palavra);i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            palavra[i] = caracter;
        }
    }

    printf("%s",palavra);

}
