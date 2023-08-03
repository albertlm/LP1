#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Replace(char *string){
    int cont = 0;
    int i = 0;

    for(i=0;(*(string+i))<strlen(string);i++){
        if(*(string+i) == ' '){
            *(string+i) = '-';
            cont++;
            i++;
        }
    }
    printf("A string alterada: %s", string);
    printf("\nA quantidade de espaços era: %i", cont);
}

int main(){
    char string[50];

    printf("Digite a string: ");
    gets(string);
    Replace(string);
}
