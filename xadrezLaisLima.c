#include <stdio.h>

int main() {

    // =========================
    // CONSTANTES (valores fixos)
    // =========================
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    //Usei const int para fixar os valores, já que devem ser sem alterações.
    // =========================
    // TORRE - FOR
    // Movimento: 5 casas para a direita
    // =========================
    printf("=== Movimento da Torre ===\n");

    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }


    // =========================
    // BISPO - WHILE
    // Movimento: diagonal (Cima + Direita)
    // =========================
    printf("\n=== Movimento do Bispo ===\n");

    int contadorBispo = 0;

    while (contadorBispo < CASAS_BISPO) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }


    // =========================
    // RAINHA - DO-WHILE
    // Movimento: 8 casas para a esquerda
    // =========================
    printf("\n=== Movimento da Rainha ===\n");

    int contadorRainha = 0;

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < CASAS_RAINHA);

 // =========================
    // MOVIMENTO DO CAVALO
    // 2 casas para baixo
    // 1 casa para a esquerda
    // =========================

    const int MOVIMENTO_BAIXO = 2;
    const int MOVIMENTO_ESQUERDA = 1;

    printf("\n=== Movimento do Cavalo ===\n");

    // Loop FOR para o movimento vertical
    for (int i = 0; i < MOVIMENTO_BAIXO; i++) {

        printf("Baixo\n");

        // Loop WHILE aninhado
        // Executa apenas após o último movimento para baixo
        if (i == MOVIMENTO_BAIXO - 1) {

            int j = 0;

            while (j < MOVIMENTO_ESQUERDA) {
                printf("Esquerda\n");
                j++;
            }
        }
    }
    return 0;
}