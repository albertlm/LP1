#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char codigoBoleto[100];
    char codigoBanco[4];
    char codigoValor[11];
    long long int indice, aux=0, iValor;
    double fValor;

    printf("Digite o codigo do boleto: ");
    scanf("%s", codigoBoleto);

    while(strcmp(codigoBoleto, "FIM")!=0){

        for(indice=0;indice<3;indice++){
            codigoBanco[indice] = codigoBoleto[indice];
        }

        codigoBanco[indice] = '\0';
        printf("%s",codigoBanco);

        if(strcmp(codigoBanco, "341")==0){
            printf(" - Banco Itau");
        }
        else
            if(strcmp(codigoBanco, "001")==0){
                printf(" - Banco do Brasil");
            }
            else
                if(strcmp(codigoBanco, "033")==0){
                    printf(" - Santander");
                }
                else
                    if(strcmp(codigoBanco, "104")==0){
                        printf(" - Caixa Economica Federal");
                    }
                    else
                        printf(" - CitiBank");



        for(indice=36;indice<50;indice++){
            codigoValor[aux] = codigoBoleto[indice];
            aux = aux +1;
        }

        codigoValor[indice] = '\0';

        iValor=atoi(codigoValor);

        fValor = iValor/100.0;

        printf("\nValor boleto: R$%.2lf", fValor);

        printf("\nValor multa: R$%.2lf", fValor*0.1);

        printf("\nValor total: R$%.2lf", fValor*1.1);

        printf("\n\nDigite o codigo do boleto: ");
        scanf("%s",codigoBoleto);
    }

}
