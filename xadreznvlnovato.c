// Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.
printf("%d \n", numero); - WHILE
// Bispo cinco casas na diagonal para cima e à direita. - DO-WHILE
// Rainha oito casas para a esquerda. - FOR

#include <stdio.h>
int main()
{
    int torre = 1; // Definindo o valor da variável Torre

    printf("O movimento da Torre é:\n"); // Frase de iniciação do movimento
    while (torre <= 5)                   // Especificando até quando a Torre ira movimentar
    {
        printf("Direita\n");
        torre++; // Incrementando um movimento até a informação ser falsa
    }

    int bispo = 1; //Definindo o valor da variável Bispo

    printf("O movimento do Bispo é:\n");
    do
    {
        printf("Cima, Direita\n"); //Simbolizando o movimento na diagonal
        bispo++; //Incrementando um movimento até a informação ser falsa
    } while (bispo <= 5);

    int rainha = 1; //Definindo o valor da variável Rainha

    printf("O movimento da Rainha é:\n");
    for (rainha = 1; rainha <= 8; rainha++) //Definindo até quando a informação vai ser verdadeira
    {
        printf("Esquerda\n");
    }
}