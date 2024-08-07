Atividades de programação em **linguagem C** que envolvem o uso de declarações condicionais:

1. Atividade com `if`:
- Descrição: Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou zero. Use a declaração `if`.
- Dica: Use a função `scanf` para ler o número e compare-o com zero.

  #include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O número %d é positivo.\n", num);
    } else if (num < 0) {
        printf("O número %d é negativo.\n", num);
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}

2. Atividade com `if else`:
- Descrição: Crie um programa que determine se um ano é bissexto ou não. 
 Um ano é bissexto se for divisível por 4, exceto quando é divisível por 100 (a menos que também seja divisível por 400).
- Dica: Use a declaração `if else` para verificar as condições.

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}

3. Atividade com `switch`:
- Descrição: Implemente um programa que leia um número de 1 a 7 e exiba o dia da semana correspondente (1 = domingo, 2 = segunda-feira, etc.).
- Dica: Use a estrutura `switch` para associar os números aos dias da semana.

#include <stdio.h>

int main() {
    int dia;

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido\n");
            break;
    }

    return 0;
}

4. Atividade com Operador Ternário:
- Descrição: Escreva um programa que leia dois números inteiros e exiba o maior deles usando o operador ternário.
- Dica: Use a expressão `(a > b) ? a : b` para encontrar o maior número.

#include <stdio.h>

int main() {
    int num1, num2, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    maior = (num1 > num2) ? num1 : num2;

    printf("O maior número é: %d\n", maior);

    return 0;
}
