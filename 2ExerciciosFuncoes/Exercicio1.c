#include <stdio.h>
#include <stdlib.h>

/*Exercício Clube*/

int PlanJovem(int J1)
{
    int resultado;
    resultado = 200+30*12+10*J1*12;
}

int PlanAdulto(int A1)
{
    int resultado;

    if (A1 == 0){
        resultado = 300+60*6+54*6;
    }else{
        resultado = 300+60*12;
    }

    return resultado;
}

int main(void)
{
    int Idade = 0, NumDependente, Resultado;

    while (Idade < 16){
        printf("Digite sua idade: ");
        scanf("%i", &Idade);
    }

    printf("Digite o número de dependentes: ");
    scanf("%i", &NumDependente);

    if (Idade >= 16 && Idade < 20){
        Resultado = PlanJovem(NumDependente);
        printf("Plano JOVEM, total anual: $%i", Resultado);
    }else{
        Resultado = PlanAdulto(NumDependente);
        printf("Plano ADULTO, total anual: $%i", Resultado);
    }
}
