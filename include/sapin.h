#ifndef __SAPIN_H__
#define __SAPIN_H___

#include <stdio.h>
// Codes de couleur ANSI
#define RESET   "\x1b[0m"
#define GRAS    "\x1b[1m"
#define BLEU    "\x1b[34m"
#define VERT    "\x1b[32m"
#define JAUNE   "\x1b[33m"
#define ROUGE   "\x1b[31m"
#define CYAN    "\x1b[36m"
#define MARRON "\033[33m"

void clearScreen ();
void pauseScreen();

void DrawFeuillage(int feuillage);
void DrawTronc(int tronc, int feuillage);


#endif