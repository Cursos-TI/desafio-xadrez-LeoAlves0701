#include <stdio.h>

int main() {
    int bispo = 1;
    int torre = 1;
    int rainha = 1;
    int cavalo = 1;

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

    // Cavalo com loop de repetição 
   printf("\nMovimento do Cavalo:\n");

for (int i = 1; i <= 2; i++) {   // FOR 
    printf("Baixo\n");

    if (i == 2) {  
        int j = 1;
        while (j <= 1) {   // WHILE 
            printf("Esquerda\n");
            j++;
        }
    }
}
    return 0;

}