// Desafio Nível Mestre
// Modificar as movimentações utilizando: Recursividade, Loops Complexos para o Cavalo e Bispo com Loops Aninhados
// O movimento do Cavalo será: CIMA, CIMA, DIREITA
// Torre cinco casas para a direita.
// Bispo cinco casas na diagonal para cima e à direita.
// Rainha oito casas para a esquerda.

#include <stdio.h>
void recursiveTorre(int n) // Usando VOID para não precisar usar estruturas de loop
{
    if (n <= 5)
    {
        printf("Direita\n"); // Definindo o que vai ser impresso
        printf("\n");
        recursiveTorre(n + 1);
    }
}

void recursiveRainha(int n) // Usando VOID para não precisar usar estruturas de loop
{
    if (n <= 8)
    {
        printf("Esquerda\n"); // Definindo o que vai ser impresso
        printf("\n");
        recursiveRainha(n + 1);
    }
}

void imprimirMovimentoBispoVertical() // Utilizando VOID para imprimir a mensagem desejada
{
    printf("Cima\n");
}

void imprimirMovimentoBispoHorizontal() // Utilizando VOID para imprimir a mensagem desejada
{
    printf("Direita\n");
}
int main()
{
    int torre = 1;
    printf("O movimento da Torre é:\n");
    printf("\n");
    recursiveTorre(torre); // Acessando o calculo do VOID definido anteriormente

    int rainha = 1;
    printf("O movimento da Rainha é:\n");
    printf("\n");
    recursiveRainha(rainha); // Acessando o calculo do VOID definido anteriormente

    int bispoHorizontal = 1;
    int bispoVertical = 1;
    printf("O Movimento do Bispo é:\n");
    for (bispoVertical = 1; bispoVertical <= 5; bispoVertical++)
    {
        for (bispoHorizontal = 1; bispoHorizontal <= 5; bispoHorizontal++) // Loops Aninhados para realizar as duas operaçoes e fazer o movimento diagonal
            ;
        {
            imprimirMovimentoBispoHorizontal();
        }
        imprimirMovimentoBispoVertical();
        printf("\n");
    }
    int cavaloVertical = 1;
    int cavaloHorizontal = 1;

    printf("O movimento do Cavalo é:\n");
    for (cavaloHorizontal = 1; cavaloHorizontal < 3; cavaloHorizontal++) // Definindo a direção: DIREITA
    {
        do
        {
            printf("Cima\n"); // Loop Aninhado para definir a função que se repete 2 vezes (Direção CIMA)
            printf("\n");
            cavaloVertical++;
        } while (cavaloVertical < 2);
    }
    printf("Direita\n");
    printf("\n");

    return 0;
}