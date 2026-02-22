#include <stdio.h>

// ================================
// FUNÇÕES RECURSIVAS
// ================================

// -------------------------------
// Torre - movimento para a direita
// -------------------------------
void moverTorre(int casas) {
    if (casas == 0) {
        return; // condição de parada da recursão
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

// -------------------------------
// Rainha - movimento para a esquerda
// -------------------------------
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -------------------------------
// Bispo - movimento diagonal (Cima + Direita)
// Recursividade + loops aninhados
// -------------------------------
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    // Loop externo: movimento vertical
    for (int v = 1; v <= 1; v++) {

        // Loop interno: movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ================================
// FUNÇÃO PRINCIPAL
// ================================
int main() {

    // ================================
    // Constantes de movimento
    // ================================
    const int TORRE = 5;
    const int BISPO = 5;
    const int RAINHA = 8;

    // ================================
    // Torre (Recursiva)
    // ================================
    printf("Movimento da Torre:\n");
    moverTorre(TORRE);

    printf("\n");

    // ================================
    // Bispo (Recursivo + loops aninhados)
    // ================================
    printf("Movimento do Bispo:\n");
    moverBispo(BISPO);

    printf("\n");

    // ================================
    // Rainha (Recursiva)
    // ================================
    printf("Movimento da Rainha:\n");
    moverRainha(RAINHA);

    printf("\n");

    // ================================
    // Cavalo - loops complexos
    // Movimento em "L": 2 Cima e 1 Direita
    // ================================
    printf("Movimento do Cavalo:\n");

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    for (int i = 1; i <= movimentoVertical; i++) {

        if (i > 2) {
            break; // segurança, não deixa ultrapassar
        }

        printf("Cima\n");
    }

    for (int j = 1; j <= movimentoHorizontal; j++) {

        if (j == 0) {
            continue; // exemplo de uso do continue
        }

        printf("Direita\n");
    }

    return 0;
}