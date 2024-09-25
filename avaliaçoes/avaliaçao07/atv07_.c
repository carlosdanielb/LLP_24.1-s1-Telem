#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

// Definição da estrutura do produto
typedef struct {
    int codigo;
    char descricao[100];
    float valor_unitario;
    int quantidade_estoque;
} Produto;

// Declaração do array de produtos
Produto produtos[MAX_PRODUTOS];
int total_produtos = 0;

// Função para cadastrar um produto
void cadastrar_produto() {
    if (total_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    Produto p;

    printf("Cadastro de Produto\n");
    printf("Digite o código do produto: ");
    scanf("%d", &p.codigo);
    getchar(); // Consumir o caractere de nova linha
    printf("Digite a descrição do produto: ");
    fgets(p.descricao, sizeof(p.descricao), stdin);
    p.descricao[strcspn(p.descricao, "\n")] = 0; // Remover o caractere de nova linha
    printf("Digite o valor unitário do produto: ");
    scanf("%f", &p.valor_unitario);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &p.quantidade_estoque);

    produtos[total_produtos] = p;
    total_produtos++;

    printf("Produto cadastrado com sucesso!\n");
}

// Função para consultar e alterar um produto
void consultar_produto_alteracao() {
    int codigo, encontrado = -1;
    printf("Consultar Produto para Alteração\n");
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("Produto não encontrado!\n");
        return;
    }

    Produto *p = &produtos[encontrado];
    
    printf("Produto encontrado:\n");
    printf("Código: %d\n", p->codigo);
    printf("Descrição: %s\n", p->descricao);
    printf("Valor unitário: %.2f\n", p->valor_unitario);
    printf("Quantidade em estoque: %d\n", p->quantidade_estoque);

    printf("Digite os novos dados (ou pressione Enter para manter o valor atual):\n");

    getchar(); // Consumir o caractere de nova linha
    printf("Nova descrição: ");
    char nova_descricao[100];
    fgets(nova_descricao, sizeof(nova_descricao), stdin);
    if (strcmp(nova_descricao, "\n") != 0) {
        nova_descricao[strcspn(nova_descricao, "\n")] = 0; // Remover o caractere de nova linha
        strcpy(p->descricao, nova_descricao);
    }

    printf("Novo valor unitário: ");
    float novo_valor;
    if (scanf("%f", &novo_valor) == 1) {
        p->valor_unitario = novo_valor;
    }

    printf("Nova quantidade em estoque: ");
    int nova_quantidade;
    if (scanf("%d", &nova_quantidade) == 1) {
        p->quantidade_estoque = nova_quantidade;
    }

    printf("Produto alterado com sucesso!\n");
}

// Função para listar todos os produtos
void listar_produtos() {
    if (total_produtos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("Lista de Produtos\n");
    for (int i = 0; i < total_produtos; i++) {
        Produto p = produtos[i];
        float valor_estoque = p.valor_unitario * p.quantidade_estoque;
        printf("Código: %d, Descrição: %s, Valor Unitário: %.2f, Quantidade em Estoque: %d, Valor do Estoque: %.2f\n",
               p.codigo, p.descricao, p.valor_unitario, p.quantidade_estoque, valor_estoque);
    }
}

// Função para excluir um produto
void excluir_produto() {
    int codigo, encontrado = -1;
    printf("Exclusão de Produto\n");
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("Produto não encontrado!\n");
        return;
    }

    Produto p = produtos[encontrado];
    printf("Produto encontrado:\n");
    printf("Código: %d\n", p.codigo);
    printf("Descrição: %s\n", p.descricao);
    printf("Valor unitário: %.2f\n", p.valor_unitario);
    printf("Quantidade em estoque: %d\n", p.quantidade_estoque);

    char confirmar;
    printf("Deseja excluir este produto? (s/n): ");
    getchar(); // Consumir o caractere de nova linha
    scanf("%c", &confirmar);

    if (confirmar == 's' || confirmar == 'S') {
        for (int i = encontrado; i < total_produtos - 1; i++) {
            produtos[i] = produtos[i + 1];
        }
        total_produtos--;
        printf("Produto excluído com sucesso!\n");
    } else {
        printf("Exclusão cancelada.\n");
    }
}

// Função para exibir o menu
void menu() {
    int opcao;
    
    do {
        printf("\nMenu de Opções:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produto para Alteração\n");
        printf("3. Listar todos os Produtos\n");
        printf("4. Excluir Produto\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_produto();
                break;
            case 2:
                consultar_produto_alteracao();
                break;
            case 3:
                listar_produtos();
                break;
            case 4:
                excluir_produto();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 5);
}

int main() {
    menu();
    return 0;
}
