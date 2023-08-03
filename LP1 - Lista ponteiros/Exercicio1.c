#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ConverteIsbn(char *isbn){
    int compr=11;
    int isbnNovo[compr], s1[compr], s2[compr];
    int i=0;

    while(strcmp(isbn, "FIM")!=0){
        //Conversão ISBN
        printf("ISBN: | ");

        for(i=0;i<compr;i++){
            if(*(isbn+i)=='-'){
                //Pós Hífen
                *(isbn+i)=*(isbn+i+1);
                if(*(isbn+i)=='X'){
                    *(isbnNovo+i) = 10;
                }else{
                    *(isbnNovo+i) = *(isbn+i)-48;
                }
                break;
            }else if(*(isbn+i)=='X'){
                *(isbnNovo+i) = 10;
            }else{
                *(isbnNovo+i) = *(isbn+i)-48;
            }
        }

        for(i=0;i<10;i++){
            if(*(isbn+i)=='X')
                printf("%c | ", 'X');
            else
                printf("%i | ", *(isbnNovo+i));
        }

        //CAlculo S1
        printf("\nS1: | ");
        *(s1)=*(isbnNovo);
        for(i=1;i<11;i++){
            *(s1+i) = *(isbnNovo+i) + *(s1+i-1);
        }
        for(i=0;i<10;i++){
            printf("%i | ", *(s1+i));
        }

        //Calculo S2
        printf("\nS2: | ");
        *(s2)=*(s1);
        for(i=1;i<11;i++){
            *(s2+i) = *(s1+i) + *(s2+i-1);
        }
        for(i=0;i<10;i++){
            printf("%i | ", *(s2+i));
        }

        //Teste de validade
        if((*(s2+9)%11)==0){
            printf("\nO codigo e valido: %i", *(s2+9));
        }else{
            printf("\nO codigo e invalido: %i", *(s2+9));
        }

        printf("\n\nDigite outro código ISBN: ");
        scanf("%s", isbn);
    }

    printf("\nVerificador encerrado!");

}

int main(){
    char isbn[12];
    int i;

    printf("Digite o ISBN: ");
    scanf("%s", isbn);

    ConverteIsbn(isbn);
}

