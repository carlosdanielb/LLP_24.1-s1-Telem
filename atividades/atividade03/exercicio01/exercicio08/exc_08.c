Exercícios de programação em linguagem C que abordam variáveis, tipos de dados e operadores:

1. Calculadora Simples
   - Crie um programa que leia dois números inteiros do usuário e exiba a soma, subtração, multiplicação e divisão desses números.

#include <stdio.h>

int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;

    // Leia os dois números inteiros do usuário
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Calcule as operações
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    // Verifique se o segundo número é diferente de zero antes de dividir
    if (num2 != 0) {
        divisao = (float) num1 / num2;
    } else {
        printf("Erro: não é possível dividir por zero!\n");
        return 1;
    }

    // Exiba os resultados
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}

2. Conversão de Temperatura
   - Escreva um programa que converta uma temperatura em graus Celsius para Fahrenheit. O usuário deve inserir a temperatura em Celsius.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Leia a temperatura em Celsius do usuário
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converta a temperatura de Celsius para Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Exiba o resultado
    printf("%.2f°C é igual a %.2f°F\n", celsius, fahrenheit);

    return 0;
}

3. Exercício: Verificação de Número Par
   - Peça ao usuário para digitar um número inteiro. Verifique se o número é par ou ímpar e exiba a mensagem correspondente.

#include <stdio.h>

int main() {
    int numero;

    // Peça ao usuário para digitar um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifique se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}

4. Cálculo de Média Ponderada
   - Leia três notas (pesos 2, 3 e 5) e calcule a média ponderada. Exiba a média resultante.

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Peça ao usuário para digitar as três notas
    printf("Digite a nota 1 (peso 2): ");
    scanf("%f", &nota1);
    printf("Digite a nota 2 (peso 3): ");
    scanf("%f", &nota2);
    printf("Digite a nota 3 (peso 5): ");
    scanf("%f", &nota3);

    // Calcule a média ponderada
    media = (2 * nota1 + 3 * nota2 + 5 * nota3) / (2 + 3 + 5);

    // Exiba a média resultante
    printf("Média ponderada: %.2f\n", media);

    return 0;
}

5. Troca de Valores
   - Leia dois números inteiros e troque seus valores sem usar uma variável temporária

#include <stdio.h>

int main() {
    int a, b;

    // Peça ao usuário para digitar os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Troque os valores sem usar uma variável temporária
    a = a + b;
    b = a - b;
    a = a - b;

    // Exiba os valores trocados
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}
