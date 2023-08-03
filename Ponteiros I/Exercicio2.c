#include <stdio.h>

int main(void)
{
    int n[] = {7, 8, 9};        /* Vetor int recebe valores*/
    int *p;                     /* Cria��o do ponteiro p*/
    p = &n[0];                  /* Ponteiro recebe o endere�o do vetor n*/
    p++;                        /* p aponta para o endere�o n[1]*/
    printf("Valor: %d ", *p);   /* � impresso o valor que p aponta, n[1] = 8*/
    (*p)++;                     /* O conte�do que p aponta � incrementado em 1*/
    printf("Valor: %d\n", *p);  /* Imprime o valor de n[1] = 9*/
}


