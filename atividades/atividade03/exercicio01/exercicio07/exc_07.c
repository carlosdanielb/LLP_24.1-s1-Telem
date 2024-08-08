Alguns exemplos de **pseudocódigo** para resolver problemas simples do dia a dia:

1. Fazer Café:
   - Descrição: Escreva um pseudocódigo para fazer uma xícara de café.
   - Pseudocódigo:

#include <stdio.h>

void fazerCafe() {
    // Instruções para fazer café
    printf("1. Ferva água.\n");
    printf("2. Adicione pó de café à cafeteira.\n");
    printf("3. Despeje a água quente sobre o pó.\n");
    printf("4. Espere alguns minutos...\n");
    wait(5); // 5 minutos
    printf("5. Coe o café e sirva.\n");
    printf("Seu café está pronto!\n");
}

int main() {
    fazerCafe();
    return 0;
}

void wait(int minutes) {
    // Simula um tempo de espera
    for (int i = 0; i < minutes; i++) {
        printf(".");
        sleep(1); // 1 segundo
    }
    printf("\n");
}

2. Fritar um Ovo:
   - Descrição: Escreva um pseudocódigo para fritar um ovo.
   - Pseudocódigo:

#include <stdio.h>

void fritarOvo() {
    // Etapas para fritar um ovo
    printf("1. Quebre o ovo em uma tigela.\n");
    printf("2. Adicione um pouco de sal e pimenta ao gosto.\n");
    printf("3. Misture bem o ovo.\n");
    printf("4. Aqueça uma frigideira em fogo médio.\n");
    printf("5. Adicione um pouco de óleo ou manteiga à frigideira.\n");
    printf("6. Despeje o ovo misturado na frigideira.\n");
    printf("7. Cozinhe por cerca de 3 minutos ou até as claras estarem cozidas.\n");
    wait(3); // 3 minutos
    printf("8. Vire o ovo e cozinhe por mais 1-2 minutos ou até as gemas estarem cozidas.\n");
    wait(1); // 1 minuto
    printf("9. Retire o ovo da frigideira e sirva.\n");
    printf("Seu ovo frito está pronto!\n");
}

int main() {
    fritarOvo();
    return 0;
}

void wait(int minutes) {
    // Simula um tempo de espera
    for (int i = 0; i < minutes; i++) {
        printf(".");
        sleep(1); // 1 segundo
    }
    printf("\n");
}

3.  Atravessar uma Rua:
   - Descrição: Escreva um pseudocódigo para atravessar uma rua com segurança.
   - Pseudocódigo:

#include <stdio.h>

void atravessarRua() {
    // Etapas para atravessar uma rua com segurança
    printf("1. Pare e observe a rua em ambos os sentidos.\n");
    printf("2. Verifique se há algum veículo se aproximando.\n");
    printf("3. Certifique-se de que o sinal de trânsito esteja verde ou que não haja veículos próximos.\n");
    printf("4. Olhe para a esquerda, direita e novamente para a esquerda para ter certeza de que não há veículos se aproximando.\n");
    printf("5. Verifique se há pedestres ou ciclistas próximos.\n");
    printf("6. Atravessar a rua com calma e atenção.\n");
    printf("7. Continue a olhar para ambos os lados da rua enquanto atravessa.\n");
    printf("8. Chegue ao outro lado da rua com segurança.\n");
    printf("Você atravessou a rua com segurança!\n");
}

int main() {
    atravessarRua();
    return 0;
}

4. Fazer uma Vitamina de Banana:
   - Descrição: Escreva um pseudocódigo para preparar uma vitamina de banana.
   - Pseudocódigo:

#include <stdio.h>

void prepararVitaminaDeBanana() {
    // Etapas para preparar uma vitamina de banana
    printf("1. Pegue 2 bananas maduras.\n");
    printf("2. Lave as bananas com água fresca.\n");
    printf("3. Descasque as bananas e coloque-as em um liquidificador.\n");
    printf("4. Adicione 1 xícara de leite ou iogurte ao liquidificador.\n");
    printf("5. Adicione 1 colher de sopa de mel ou açúcar ao liquidificador (opcional).\n");
    printf("6. Adicione 1/2 xícara de gelo ao liquidificador (opcional).\n");
    printf("7. Ligue o liquidificador e misture todos os ingredientes até ficar homogêneo.\n");
    printf("8. Coe a vitamina para remover qualquer pedaço de banana.\n");
    printf("9. Sirva a vitamina de banana imediatamente.\n");
    printf("Sua vitamina de banana está pronta!\n");
}

int main() {
    prepararVitaminaDeBanana();
    return 0;
}
