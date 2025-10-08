#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int hauteur;

    printf("entrez la hauteur du sapin : ");
    scanf("%d", &hauteur);

    srand(time(0));

    for(int i = 0; i < hauteur; i++)
    {

        for (int j = 0; j < hauteur - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            if(rand() % 5 == 0)
            {
                printf("o");
            } else{
                printf("*");
            }
        }
        printf("\n");       
        
    }

    for (int i = 0; i < hauteur; i++)
    {
        for (int j = 0; j < hauteur - 1; j++)
        {
            printf(" ");
        }
        printf("|\n");
    }
    

    return 0;
}