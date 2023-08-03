#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned char cNum = 0;
    int iNum = 0;
    while (iNum <= 255)
    {
        printf( "%d %d\n", iNum, cNum ) ;
        iNum = iNum + 1 ;
        cNum = cNum + 1 ;
    }
    return 0 ;
}
