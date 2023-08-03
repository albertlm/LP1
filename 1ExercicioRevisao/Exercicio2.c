#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumFunc, TempoServ, CodigoFunc, SalBase, AreaFunc, Gratificacao, GratTotal;

    CodigoFunc = 1;
    GratTotal = 0;

    printf("Digite o código do funcionário: ");
    scanf("%d", &CodigoFunc);

    while(CodigoFunc != 0){

        printf("Digite o tempo de serviço: ");
        scanf("%d", &TempoServ);
        printf("Digite o salário base: ");
        scanf("%d", &SalBase);

        AreaFunc = CodigoFunc/100;
        NumFunc = CodigoFunc%100;


        if(AreaFunc == 1){
            if(TempoServ <= 5){
                Gratificacao = SalBase * 0.025;
            }else{
                Gratificacao = SalBase * 0.045;
            }
            GratTotal = GratTotal + Gratificacao;
            printf("Gratificacao do funcionario %d: R$ %d\n\n",NumFunc, Gratificacao);
        }

        if(AreaFunc == 2){
            if(TempoServ <= 5){
                Gratificacao = SalBase * 0.035;
            }else{
                Gratificacao = SalBase * 0.055;
            }
            GratTotal = GratTotal + Gratificacao;
            printf("Gratificacao do funcionario %d: R$ %d\n\n",NumFunc, Gratificacao);
        }

        if(AreaFunc == 3){
            if(TempoServ <= 5){
                Gratificacao = SalBase * 0.04;
            }else{
                Gratificacao = SalBase * 0.065;
            }
            GratTotal = GratTotal + Gratificacao;
            printf("Gratificacao do funcionario %d: R$ %d\n\n",NumFunc, Gratificacao);
        }
        printf("Digite o código do funcionário: ");
        scanf("%d", &CodigoFunc);
    }

    printf("\nO total de Gratificações pago pela empresa é: R$%d", GratTotal);

}
