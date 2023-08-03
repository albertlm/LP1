#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char cripto(char *string){
    strrev(string);
    strupr(string);

    for(int i=0;i<strlen(string);i++){
        if((*(string+i)!='A')&&(*(string+i)!='E')&&((string+i)!='I')&&(*(string+i)!='O')&&(*(string+i)!='U')){
            *(string+i)='#';
        }
    }
}

int main(){
    int i;
    char vetchar[100];
    printf("Informe uma string: ");
    scanf("%s", vetchar);
    cripto(vetchar);
    printf("Invertida: %s", vetchar);
}
