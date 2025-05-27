// Desafio Nível Mestre
// Modificar as movimentações utilizando: Recursividade, Loops Complexos para o Cavalo e Bispo com Loops Aninhados
// O movimento do Cavalo será: CIMA, CIMA, DIREITA
// Torre cinco casas para a direita.
// Bispo cinco casas na diagonal para cima e à direita.
// Rainha oito casas para a esquerda.

#include <stdio.h>
void recursiveTorre(int n)
{
    if (n <= 5)
    {
        printf("Direita\n");
        printf("\n");
        recursiveTorre(n + 1);
    }
}

void recursiveRainha(int n)
{
    if (n <= 8)
    {
        printf("Esquerda\n");
        printf("\n");
        recursiveRainha(n + 1);
    }
}

void imprimirMovimentoBispoVertical()
{
    printf("Cima\n");
}

void imprimirMovimentoBispoHorizontal()
{
    printf("Direita\n");
}
int main()
{
    int torre = 1;
    printf("O movimento da Torre é:\n");
    printf("\n");
    recursiveTorre(torre);

    int rainha = 1;
    printf("O movimento da Rainha é:\n");
    printf("\n");
    recursiveRainha(rainha);

    int bispoHorizontal = 1;
    int bispoVertical = 1;
    printf("O Movimento do Bispo é:\n");
    for (bispoVertical = 1; bispoVertical <= 5; bispoVertical++)
    {
        for (bispoHorizontal = 1; bispoHorizontal <= 5; bispoHorizontal++);
        {
            imprimirMovimentoBispoHorizontal();
        }
        imprimirMovimentoBispoVertical();
        printf("\n");
    }

    return 0;
}