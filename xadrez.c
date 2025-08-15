#include <stdio.h>

int main() {
    int bispo = 1;
    int torre = 1;
    int rainha = 1;

    // Torre com FOR
    printf("Movimento da Torre:\n");
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }

    // Bispo com WHILE
    printf("\nMovimento do Bispo:\n");
    while (bispo <= 5) {
        printf("Cima Direita\n");
        bispo++;
    }

    // Rainha com DO-WHILE
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}