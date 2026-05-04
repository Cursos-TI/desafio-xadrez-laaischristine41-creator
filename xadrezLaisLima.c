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


    return 0;
}