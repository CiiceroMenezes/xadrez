// Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.
// Torre cinco casas para a direita. - WHILE
// Bispo cinco casas na diagonal para cima e à direita.
// Rainha oito casas para a esquerda.

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
}