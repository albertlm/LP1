#include <stdio.h>

void main(){
    float valores[10] = {1,2,3,4,5,6,7,8,9,10}, *p;

    p = &valores[0];
    printf("%p %p\n", valores, p); /*Est� sendo indicada a posi��o de valores e a posi��o armazenada no ponteiro p*/

    p = valores;
    printf("\n%p %p\n", valores, p);

    p = &valores[1];
    printf("\n%x %p\n", p - valores, p);

    p = &valores[6];
    printf("\n%x %p\n", p - valores, p);
}

/*a)Significa indicar sua posi��o de mem�ria

//b) O valor da variavel apontada por p na posi��o atual receber� 15

//c) O valor � referente A posi��o de i = 6 armazenada no ponteiro p - O endere�o da posi��o inicial de valores, resultando no valor de valores[6]
*/


