// Desafio Nível Aventureiro
// Implementar o movimento do Cavalo em L usando 2 tipos de Loops Aninhados
// Obrigatoriamente um deve ser FOR e outro While ou Do-while
// O movimento da peça deve ser: Duas casas para baixo e uma para esquerda.

#include <stdio.h>
int main()
{
    int cavaloVertical = 1;
    int cavaloHorizontal = 1;

    printf("O movimento do Cavalo é:\n");
    for (cavaloHorizontal = 1; cavaloHorizontal < 3; cavaloHorizontal++) // Definindo a direção
    {
        do
        {
            printf("Baixo\n"); // Loop Aninhado para definir a função que se repete 2 vezes 
            printf("\n");
            cavaloVertical++;
        } while (cavaloVertical < 2);
    }
    printf("Esquerda\n");
    printf("\n");

    return 0;
}