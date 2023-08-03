#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int x, valor, *px;

    x = 10;
    px = &x;
    valor = (*px)/5;
    printf("Valor: %i",valor);
}
