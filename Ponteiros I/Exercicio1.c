#include <stdio.h>

void main(){
    float valores[10] = {1,2,3,4,5,6,7,8,9,10}, *p;

    p = &valores[0];
    printf("%p %p\n", valores, p); /*Está sendo indicada a posição de valores e a posição armazenada no ponteiro p*/

    p = valores;
    printf("\n%p %p\n", valores, p);

    p = &valores[1];
    printf("\n%x %p\n", p - valores, p);

    p = &valores[6];
    printf("\n%x %p\n", p - valores, p);
}

/*a)Significa indicar sua posição de memória

//b) O valor da variavel apontada por p na posição atual receberá 15

//c) O valor é referente A posição de i = 6 armazenada no ponteiro p - O endereço da posição inicial de valores, resultando no valor de valores[6]
*/


