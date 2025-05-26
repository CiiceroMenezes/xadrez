// Desafio Nível Aventureiro
// Implementar o movimento do Cavalo em L usando 2 tipos de Loops Aninhados
// Obrigatoriamente um deve ser FOR e outro While ou Do-while
// O movimento da peça deve ser: Duas casas para baixo e uma para esquerda.

#include <stdio.h>
int main()
{
    int cavalo = 1; // Definindo o valor de inicio da variavel Cavalo

    for (cavalo = 1; cavalo <= 3; cavalo++) // Definindo a partir de quando a informação vai ser verdadeira
    {
        while (cavalo < 3) // Definindo até quando a peça vai para a direção "baixo"
        {
            printf("Baixo\n");
            printf("\n"); // Pular linha de um movimento para o outro
            cavalo++;
        }
        printf("Esquerda\n");
        printf("\n"); // Pular linha de um movimento para o outro
    }

    return 0;
}