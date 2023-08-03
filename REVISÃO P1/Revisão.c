#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Exercício 2 REVISÃO*/
void subchar(char  palavra[11], char letra1, char letra2){
    int i;
    for(i=0;i<strlen(palavra);i++){
        if(tolower(palavra[i])==tolower(letra1)){
            palavra[i] = letra2;
        }
    }
}

/*Observação
    if(strcmp(plavra,"Teste")==0);
    strcpy(palavra,"Jaquiel");
    */


/*Exercício 3 REVISÃO*/
int func(int a[10; int b]){
    int temp;
    temp = a[10];
    a[0]=b;
    b=temp;
    return 0;
}

int main()/*Chamada da função*/{
    int vetor[10]={1,2,3,4,5,6,7,8,9,10};
    int var = 10;
    /*Ficar atento com quantidade de posições para não usar espaços de memória que não existem*/
    func(vetor/*Não passar Array da forma vetor[10] ou qualquer outra posição*/, var);

    /*Retorno da função*/
    printf("%i", func(vetor, var));
    /*OU*/
    int var1 = func(vetor, var);
    printf("i", var1);
}



