Atividades de programação em linguagem C  que envolvem o uso de arrays (vetores) unidimensionais e multidimensionais, além de laços `for`, os comandos `break` e `continue`:

1. Atividade com Array Unidimensional:
   - Descrição: Escreva um programa que leia 5 números inteiros do usuário e armazene-os em um array. Em seguida, exiba a soma desses números.
   - Dica: Use um loop `for` para ler os números e outro loop para calcular a soma.

#include <stdio.h>

int main() {
    int numbers[5]; // array para armazenar os 5 números inteiros
    int sum = 0; // variável para armazenar a soma dos números
    int i; // variável para controle do loop

    // Leia 5 números inteiros do usuário
    printf("Entre 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calcule a soma dos números
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Exiba a soma dos números
    printf("A soma dos números é: %d\n", sum);

    return 0;
}

2. Atividade com Array Multidimensional (Matriz):
   - Descrição: Crie um programa que leia uma matriz 3x3 (ou seja, uma matriz com 3 linhas e 3 colunas) e exiba a soma dos elementos da diagonal principal.
   - Dica: Use um loop `for` aninhado para ler os elementos da matriz e calcule a soma dos elementos da diagonal principal.

#include <stdio.h>

int main() {
    int matrix[3][3]; // matriz 3x3
    int sum = 0; // variável para armazenar a soma dos elementos da diagonal principal
    int i, j; // variáveis para controle do loop

    // Leia a matriz 3x3 do usuário
    printf("Entre os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calcule a soma dos elementos da diagonal principal
    for (i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    // Exiba a soma dos elementos da diagonal principal
    printf("A soma dos elementos da diagonal principal é: %d\n", sum);

    return 0;
}
