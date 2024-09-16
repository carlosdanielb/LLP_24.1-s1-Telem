Atividades de programação em linguagem C que envolvem o uso de loops e os comandos `break` e `continue`:

1. Atividade com `while`:
- Descrição: Escreva um programa que exiba os números pares de 1 a 10 usando um loop `while`.
- Dica: Use o operador de módulo (`%`) para verificar se um número é par.

  #include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}

2. Atividade com `do while`:
- Descrição: Crie um programa que solicite ao usuário que adivinhe um número entre 1 e 100. O programa deve continuar pedindo até que o usuário acerte o número ou digite `-1` para sair.
- Dica: Use um loop `do while` para repetir a solicitação.

  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, chute;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera um número aleatório entre 1 e 100
    numeroSecreto = rand() % 100 + 1;

    do {
        printf("Adivinhe um número entre 1 e 100 (-1 para sair): ");
        scanf("%d", &chute);

        if (chute == -1) {
            printf("Você desistiu!\n");
            break;
        }

        if (chute < numeroSecreto) {
            printf("O número é maior que %d. Tente novamente!\n", chute);
        } else if (chute > numeroSecreto) {
            printf("O número é menor que %d. Tente novamente!\n", chute);
        } else {
            printf("Parabéns! Você acertou o número secreto: %d\n", numeroSecreto);
            break;
        }
    } while ("true");

    return 0;
}

3. Atividade com `for`:
- Descrição: Escreva um programa que calcule a soma dos primeiros 10 números inteiros positivos usando um loop `for`.
- Dica: Use uma variável acumuladora para calcular a soma.

#include <stdio.h>

int main() {
    int soma = 0; // variável acumuladora

    for (int i = 1; i <= 10; i++) {
        soma += i; // soma o valor de i à variável soma
    }

    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}
