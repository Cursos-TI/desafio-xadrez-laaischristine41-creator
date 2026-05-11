#include <stdio.h>

// ===================================
// FUNÇÃO RECURSIVA - TORRE
// ===================================
void moverTorre(int casas) {

    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}


// ===================================
// FUNÇÃO RECURSIVA - RAINHA
// ===================================
void moverRainha(int casas) {

    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}


// ===================================
// FUNÇÃO RECURSIVA + LOOPS ANINHADOS
// BISPO
// ===================================
void moverBispo(int casas) {

    if (casas > 0) {

        // Loop vertical
        for (int i = 0; i < 1; i++) {

            // Loop horizontal
            for (int j = 0; j < 1; j++) {

                printf("Cima, Direita\n");
            }
        }

        moverBispo(casas - 1);
    }
}


// ===================================
// MOVIMENTO COMPLEXO - CAVALO
// ===================================
void moverCavalo() {

    int cima = 2;
    int direita = 1;

    printf("\n=== Movimento do Cavalo ===\n");

    for (int i = 0; i < cima; i++) {

        printf("Cima\n");

        // Controle de fluxo
        if (i == 1) {

            int j = 0;

            while (j < direita) {

                printf("Direita\n");
                j++;

                // Exemplo de break
                if (j == direita) {
                    break;
                }
            }
        }
    }
}


// ===================================
// MAIN
// ===================================
int main() {

    printf("=== Movimento da Torre ===\n");
    moverTorre(5);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(5);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}