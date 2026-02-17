#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // ================================
    // Nível Novato - Movimentação das Peças
    // ================================

    // Declaração das constantes de movimento
    const int BISPO = 5;
    const int TORRE = 5;
    const int RAINHA = 8;

    // ================================
    // Implementação de Movimentação do Bispo
    // Movimento diagonal: Cima + Direita
    // Estrutura utilizada: while
    // ================================
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while (contadorBispo <= BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");


    // ================================
    // Implementação de Movimentação da Torre
    // Movimento horizontal: Direita
    // Estrutura utilizada: for
    // ================================
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n");


    // ================================
    // Implementação de Movimentação da Rainha
    // Movimento horizontal: Esquerda
    // Estrutura utilizada: do-while
    // ================================
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= RAINHA);

    // ================================
    // Nível Intermediário - Movimentação do Cavalo
    // Movimento em "L": 2 Baixo e 1 Esquerda
    // Uso de loops aninhados
    // ================================

    const int BAIXO = 2;
    const int ESQUERDA = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo (for) - movimento vertical (Baixo)
    for (int i = 1; i <= BAIXO; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) - movimento horizontal (Esquerda)
    int contadorCavalo = 1;
    while (contadorCavalo <= ESQUERDA) {
        printf("Esquerda\n");
        contadorCavalo++;
    }

    return 0;
}

