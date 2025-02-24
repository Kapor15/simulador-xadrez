#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas p direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na dgnl p cima e direita
    printf("Movimento do Bispo:\n");
    int count = 0;
    while (count < 5) {
        printf("Cima Direita\n");
        count++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
    printf("\n");

    return 0;
}
