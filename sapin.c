#include <stdio.h>
/*
* Pour ce programme nous allons récuperer la @hauteur totale du sapin saisi par l'utilisateur
* les 2/3 de cette hauteur represente la hauteur du triangle isocele qui est noté ici @h1
* et les 1/3 restant represente la taille du rectangle qui sert de tronc pour le sapin noté @h2
*
* @espace est un entier charger d'afficher des vides precedant l'affichage du symbole '*' 
* qui servira a representer le sapin visuellement
* @largeur represente la largeur du rectangle
*/
int main()
{
    int hauteur, espace, largeur, h1, h2;

    printf("Entrer la taille du sapin: ");
    scanf("%d", &hauteur);

    // Dessinner les triangle isocele
    h1 = hauteur * 3 / 4;
    h2 = hauteur * 1 / 4;
    espace = (hauteur / 2) + 1;
    
    for (int i = 1; i <= h1; i++)
    {
        for(int k = 0; k < espace + 1; k++)
        {
            printf(" ");        // Affiche le caractere ' ' (espace + 1) - k fois
        }
        
        for (int j = 1; j < i * 2; j++)
        {
            
            printf("*");        // Affiche le caractere '*' (un nombre impair de fois)
            largeur = j;        // On definit la larqueur du rectangle en fonction de celle de la derniere ligne afficher
        }
        printf("\n");

        espace--;       // on reduit le nombre d'espace pour un affichage en diagonale
    }

    // Dessinner le rectangle
    if(largeur % 2 == 0)
    {
        largeur = largeur / 2;
    }else{
        largeur = (largeur / 2) + 1;
    }

    if (hauteur <= 4)
    {
        if (hauteur == 4)
        {
            largeur = 1;
        }
        else if(hauteur > 1){
            largeur = 1;
            h2--;
        }
        else{
            return 0;
        }  
    }
    
    espace = hauteur - largeur;

    for (int i = 0; i <= h2; i++)
    {
        for(int k = 0; k < espace + 1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < largeur; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}