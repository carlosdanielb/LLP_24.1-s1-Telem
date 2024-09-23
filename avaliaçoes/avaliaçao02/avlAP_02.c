#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define MAX_LINHAS 100
    #define MAX_CARACTERES 100

    int main() {
        // Cria o arquivo e armazena as linhas de texto
        FILE *arquivo = fopen("texto.txt", "w");
        if (arquivo == NULL) {
            printf("Falha ao criar o arquivo!\n");
            return 1;
        }

        // Lê e armazena as linhas de texto no arquivo
        char linha[MAX_CARACTERES];
        int i = 0;
        printf("Digite as linhas de texto (digite 'stop' para parar):\n");
        while (i < MAX_LINHAS) {
            printf("%d: ", i + 1);
            fgets(linha, MAX_CARACTERES, stdin);
            linha[strcspn(linha, "\n")] = 0; // remove o caractere de quebra de linha
            if (strcmp(linha, "stop") == 0) {
                break;
            }
            fprintf(arquivo, "%s\n", linha);
            i++;
        }

        // Encerra o arquivo
        fclose(arquivo);

        // Dados do arquivo
        printf("\nConteúdo do arquivo:\n");
        arquivo = fopen("texto.txt", "r");
        if (arquivo == NULL) {
            printf("Falha ao abrir o arquivo!\n");
            return 1;
        }
        char linha_leitura[MAX_CARACTERES];
        while (fgets(linha_leitura, MAX_CARACTERES, arquivo) != NULL) {
            printf("%s", linha_leitura);
        }
        fclose(arquivo);

        return 0;
    }
 
