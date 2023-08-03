#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num = 10, *pnum = &num;

    if(num == &pnum){
        printf("A) Verdadeiro");
    }else{
        printf("A) Falso"); //Falso
    }

    printf("\n");

    if(num == *pnum){
        printf("B) Verdadeiro");    //Verdadeiro
    }else{
        printf("B) Falso");
    }

    printf("\n");

    /*if(pnum == *num){
        printf("C) Verdadeiro");
    }else{
        printf("C) Falso");
    }*/

    printf("\n");

    if(pnum == &num){
        printf("D) Verdadeiro");        //Verdadeiro
    }else{
        printf("D) Falso");
    }
}
