#include <stdio.h>

int main(void)
{
    int n[] = {7, 8, 9};        /* Vetor int recebe valores*/
    int *p;                     /* Criação do ponteiro p*/
    p = &n[0];                  /* Ponteiro recebe o endereço do vetor n*/
    p++;                        /* p aponta para o endereço n[1]*/
    printf("Valor: %d ", *p);   /* É impresso o valor que p aponta, n[1] = 8*/
    (*p)++;                     /* O conteúdo que p aponta é incrementado em 1*/
    printf("Valor: %d\n", *p);  /* Imprime o valor de n[1] = 9*/
}


