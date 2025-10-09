#include "..\include\sapin.h"
#include <stdlib.h>
#include <time.h>

void clearScreen () {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pauseScreen() {
    printf ("\nAppuyer sur entrer pour continuer...");
    getchar();

}

void DrawFeuillage(int feuillage){
    srand(time(0));
    for (int i = 0; i < feuillage; i++) {
        
        for (int j = 0; j < feuillage - i - 1; j++) {
            putchar(' ');
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            if(rand() % 5 == 0)
            {
                printf(JAUNE "*" RESET);
            }else if(rand() % 20 == 0)
            {
                printf(ROUGE "*" RESET);
            } else{
                printf(VERT "*" RESET);
            }
        }
        putchar('\n');
    }
}

void DrawTronc(int tronc, int feuillage)
{
    for (int i = 0; i < tronc; i++) {
        for (int j = 0; j < feuillage - 2; j++) {
            putchar(' ');
        }
        printf(MARRON "|||" RESET);
        putchar('\n');
    }
}