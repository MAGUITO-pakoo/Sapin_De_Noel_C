#include "..\include\sapin.h"

int main(void) {
    int hauteur, feuillage, tronc, run, ch;

    while (run !=0)
    {
        clearScreen();
        printf("Entrez la hauteur totale du sapin : ");
        scanf("%d", &hauteur);
        run = 1;

        // Calcul des proportions
        feuillage = (hauteur * 3) / 4;
        tronc = hauteur - feuillage;

        // Feuilles
        DrawFeuillage(feuillage);

        // tronc
        DrawTronc(tronc, feuillage);

        printf("\nRecommancer (o/n)?" CYAN "\n>>" RESET);
        scanf("%c", &ch);
        switch (ch)
        {
            case 'o': case 'O':
                run = 1;
                break;
            case 'n': case 'N':
                run = 0;
                break;
            
            default:
                printf(ROUGE "choix pas pris en compte\n" RESET);
                break;
        }
        pauseScreen();
    }

    return 0;
}