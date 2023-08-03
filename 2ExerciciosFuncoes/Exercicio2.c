#include <stdio.h>
#include <stdlib.h>

float CalculaRenda(int PG)
{
    int Renda, Popular, Geral, Arquib, Cadeira;

    Popular = PG * 0.1 * 5;
    Geral = PG * 0.5 * 10;
    Arquib = PG * 0.3 * 20;
    Cadeira = PG * 0.1 * 30;

    Renda = Popular + Geral + Arquib + Cadeira;

    return(Renda);
}

void main (void)
{
    int PublicoGeral, Renda;

    printf("Qual foi o público geral do jogo: ");
    scanf("%i", &PublicoGeral);

    Renda = CalculaRenda(PublicoGeral);

    printf("O total de renda do jogo foi: $%i.00", Renda);
}
