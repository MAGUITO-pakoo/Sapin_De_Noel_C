#include <stdio.h>

int main(void) {
    int hauteur, feuillage, tronc;

    printf("Entrez la hauteur totale du sapin : ");
    scanf("%d", &hauteur);

    // Calcul des proportions
    feuillage = (hauteur * 3) / 4;
    tronc = hauteur - feuillage;

    // Feuilles
    for (int i = 0; i < feuillage; i++) {
        
        for (int j = 0; j < feuillage - i - 1; j++) {
            putchar(' ');
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            putchar('*');
        }
        putchar('\n');
    }

    // tronc
    for (int i = 0; i < tronc; i++) {
        for (int j = 0; j < feuillage - 1; j++) {
            putchar(' ');
        }
        printf("|||");
        putchar('\n');
    }

    return 0;
}