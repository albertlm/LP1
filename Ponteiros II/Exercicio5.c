#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int x=10;
    int *px=&x;
    float y=5.9;
    float *py=&y;

    printf("a) %i", x);
    printf("\nb) %f", *py);
    printf("\nc) %i", px);
    printf("\nd) %d", &y);
    printf("\ne) %i", *px);
    printf("\nf) %f", y);
    printf("\ng) %i", py);
    printf("\nh) %i", &x);
}

/*
a) x = 10
b) *py = 5.9
c) px = FFA0
d) &y = FFB4
e) *px = 10
f) y = 5.9
g) py = FFB4
h) &x = FFA0
*/
