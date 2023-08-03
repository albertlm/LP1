#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i=10, j=20,*p, *q;

    p = &i;
    q = &p;
    q = &j;
    *q = &j;
    /*i = (*&)j;*/
    i = (++*p)+(*q);
    printf("%i",i);
}

/*
a) Permitido
b) Ilegal
c) Permitido
d) Ilegal
e) Ilegal
f) Permitido
*/
