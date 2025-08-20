#include <stdio.h>

// Torre (recursivo)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Bispo (recursivo + loops aninhados)
void moverBispo(int passos) {
    if (passos == 0) return;
    for (int v = 1; v <= 1; v++) {
        for (int h = 1; h <= 1; h++) {
            printf("Cima Direita\n");
        }
    }
    moverBispo(passos - 1);
}

// Rainha (recursivo)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Cavalo (loops complexos)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 1, j = 0; i <= 3; i++, j++) {
        if (i <= 2) {
            printf("Cima\n");
            continue;
        }
        if (i == 3) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");
    moverCavalo();

    return 0;
}