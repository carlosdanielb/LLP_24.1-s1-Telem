Responda as perguntas abaixo:
A **manipulação de bits** desempenha um papel crucial na programação moderna, oferecendo controle detalhado sobre os dados em nível binário. Vamos explorar por que a manipulação de bits é importante e como ela é aplicada:

1. O que é Manipulação de Bits?
 A manipulação de bits é a técnica de trabalhar com dados em nível binário,
ou seja, diretamente com os bits que compõem os dados.
 Isso envolve realizar operações lógicas e aritméticas em nível de bit, como conjunção,
disjunção, negação, deslocamento de bits, etc. A manipulação de bits é fundamental em programação,
pois permite um controle detalhado sobre os dados e é essencial para muitas aplicações, como criptografia, 
 compressão de dados, processamento de imagens e vídeo, etc.
 
2. Qual a Importância da Manipulação de Bits?
A  manipulação de bits permite um controle detalhado sobre os dados, o que é essencial para muitas aplicações que exigem precisão e eficiência.
A manipulação de bits pode ser mais eficiente do que trabalhar com dados em nível de byte ou palavra, pois reduz a quantidade de dados que precisam ser processados.
É importante para a criptografia e a segurança de dados, pois permite a criação de algoritmos de criptografia seguros e eficientes.
Também é fundamental para a criptografia e a segurança de dados, pois permite a criação de algoritmos de criptografia seguros e eficientes.
Por fim, é usada em algoritmos de compressão de dados, como o algoritmo de Huffman, para reduzir o tamanho dos dados.
 
3. Quais são as Operações Básicas de Manipulação de Bits?
- Deslocamento de Bits (Shift)
- Operações Bit a Bit (Bitwise)
- Rotação de Bits (Rotate)
Essas são as principais operações de manipulação de bits. Elas são usadas para realizar operações de baixo nível, como manipulação de flags,
máscaras de bits e operações aritméticas.

4. Exemplo em Linguagem C. Crie um programa  que exibe os bits de um número e realiza operações básicas:

#include <stdio.h>

// Função para exibir os bits de um número
void exibirBits(int num) {
    for (int i = 31; i >= 0; i--) {
        (num & (1 << i)) ? printf("1") : printf("0");
    }
    printf("\n");
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Bits do primeiro número: ");
    exibirBits(num1);

    printf("Bits do segundo número: ");
    exibirBits(num2);

    // Operação E (AND)
    int resultadoAnd = num1 & num2;
    printf("Resultado da operação E (AND): ");
    exibirBits(resultadoAnd);

    // Operação OU (OR)
    int resultadoOr = num1 | num2;
    printf("Resultado da operação OU (OR): ");
    exibirBits(resultadoOr);

    // Operação OU Exclusivo (XOR)
    int resultadoXor = num1 ^ num2;
    printf("Resultado da operação OU Exclusivo (XOR): ");
    exibirBits(resultadoXor);

    // Operação Negação (NOT)
    int resultadoNot = ~num1;
    printf("Resultado da operação Negação (NOT) do primeiro número: ");
    exibirBits(resultadoNot);

    // Deslocamento para a Esquerda (Left Shift)
    int resultadoLeftShift = num1 << 2;
    printf("Resultado do deslocamento para a esquerda do primeiro número: ");
    exibirBits(resultadoLeftShift);

    // Deslocamento para a Direita (Right Shift)
    int resultadoRightShift = num1 >> 2;
    printf("Resultado do deslocamento para a direita do primeiro número: ");
    exibirBits(resultadoRightShift);

    return 0;
}
