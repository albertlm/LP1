#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fentradadados(float Vetor[5]){
    int Contador;

    for(Contador = 0; Contador <= 4; Contador++){
        printf("Valor %i: ", Contador+1);
        scanf("%f", &Vetor[Contador]);
    }
}

float fmedia(float Vetor[5]){
    float Media = 0;
    int Contador;

    for(Contador = 0; Contador <= 4; Contador++){
        Media = Media + Vetor[Contador];
    }

    Media = Media/5;

    printf("Média aritmética simples: %.2f\n", Media);
}

float fmediaponderada(float Vetor[5]){
    float Media = 0;
    int Contador;

    for(Contador = 0; Contador <= 4; Contador++){
        Media = Media + Vetor[Contador];
    }

    Media = Media/16;

    printf("Média ponderada simples: %.2f\n", Media);
}

float fdesviopadrao(float Vetor[5]){
    float Media = 0, DesvioPad = 0, aux = 0;
    int Contador;

    for(Contador = 0; Contador <= 4; Contador++){
        Media = Media + Vetor[Contador];
    }

    Media = Media/5;

    for(Contador = 0; Contador <= 4; Contador++){
        aux = Vetor[Contador]-Media;
        aux = aux*aux;
        DesvioPad = DesvioPad + aux;
    }

    DesvioPad = DesvioPad/5;

    DesvioPad = sqrt(DesvioPad);

    printf("O desvio padrão é: %f\n", DesvioPad);
}

float fmaiormenor(float Vetor[5]){
    float Maior = 0, Menor = 0;
    int Contador;

    Maior = Vetor[1];
    Menor = Vetor[1];

    for(Contador = 0; Contador <= 4; Contador++){
        if (Vetor[Contador] > Maior){
            Maior = Vetor[Contador];
        }
    }
    printf("O maior valor é: %f\n", Maior);

    for(Contador = 0; Contador <= 4; Contador++){
        if (Vetor[Contador] < Menor){
            Menor = Vetor[Contador];
        }
    }
    printf("O menor valor é: %f\n", Menor);
}

float fsoma(float Vetor[5]){
    float Soma = 0;
    int Contador;

    for(Contador = 0; Contador <= 4; Contador++){
        Soma = Soma + Vetor[Contador];
    }

    printf("A soma é: %f\n", Soma);
}

void main (void){
    int Opcao;
    float ValFunc[5];

    printf(">>ESTATÍSTICA<<\n1 - Entrar com os dados (5 Valores)\n2 - Calcular a média aritmética simples dos dados\n3 - Calcular a média ponderada dos dados (fornecer 5 pesos)\n4 - Calcular o desvio padrão dos dados\n5 - Achar o maior valor e menor valor\n6 - Descobrir a soma\n7 - Sair do programa");
    printf("\n\nEntre com sua opção: ");
    scanf("%i", &Opcao);

    while(Opcao!=0){
        switch(Opcao){
            case 1:
                fentradadados(ValFunc);
                break;
            case 2:
                fmedia(ValFunc);
                break;
            case 3:
                fmediaponderada(ValFunc);
                break;
            case 4:
                fdesviopadrao(ValFunc);
                break;
            case 5:
                fmaiormenor(ValFunc);
                break;
            case 6:
                fsoma(ValFunc);
                break;
            case 7:
                printf("FIM !!!");
            default:{
                printf("Opção inválida!\n");
                break;
            }
        }
        printf("\nEntre com sua opção: ");
        scanf("%i", &Opcao);
    }
}
