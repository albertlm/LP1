#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Cripto(char *string1, char *string2){
    int i, j;
    char palavra[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char cripto[53] = {'#', '%', '$', '&', '*', '9', '7', '4', '1', '?', '(', ')', '+', '_', '-', '!', '@', '¨', '{', '}', ']', '[', '/', ',', '.', '"', '<', '2', '5', '6', '0', 'ª', 'º', '8', '3', '|', '^', '~', '`', '´', 'Ç', ';', ':', '°', '=', '§', '£', '¢', '¬', '¹', '²', '³'};

    for(i=0;i<strlen(string1);i++){
        for(j=0;j<strlen(palavra);j++){
            //if()
            if(*(string1+i)==*(palavra+j)){
                *(string2+i) = *(cripto+j);
            }else if((*(string1+i))==(*(cripto+j))){
                *(string2+i) = *(palavra+j);
            }
        }
    }

}

int main(){
    char texto1[9], texto2[9], texto3[9];

    printf("Informe um texto de até 8 caracteres: ");
    scanf("%[^\n]", texto1);
    Cripto(texto1, texto2);
    Cripto(texto2, texto3);
    printf("Criptografado: %s\nDescriptografado: %s", texto2, texto3);
}
