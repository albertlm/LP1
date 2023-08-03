#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char texto[25], palavra[15], descr[11], *p1, *p2;
    strcpy(palavra, "xxxxxxx");
    strcpy(texto, "Linguagem C");
    printf("Digite a palavra: ");
    scanf("%s", &palavra[3]);
    printf("A palavra é: %s", palavra);
    p1 = &texto[6];
    p2 = &descr[0];
    scanf("%s", p2); /* O usuário digita “goiaba” aqui */
    strcpy(p1, " de trapo");
    printf(descr);
}

/*
a)A palavra "Banana" será colocada a partir da terceira posição "2", da string palavra, ou seja, ser colocada após "xxx" e ficar "xxxBanana"

b) O conteúdo de descr será goiaba, pois p2 aponta para descr e logo, quando atribuimos "goiaba ao conteudo apontado por p2, atribuimos goiaba a descr.

c) Porque o nome da string sem a posição já indica o endereço de memória de um array
*/
