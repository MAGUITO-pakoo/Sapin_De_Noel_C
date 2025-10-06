#include <stdio.h>

float soustraction(float a, float b);
float racineCarree(float a);
int main(){
    float resultat;

    resultat = racineCarree(2.0);
    printf ("%f\n", resultat);

    return 0;
}

float soustraction(float a, float b){
    float resultat = a-b;
    return resultat ;
}

float racineCarree(float a){
    float epsilon = 0.0001; // précision
    float pas = 0.001;     // pas pour approx
    float resultat = 0.0;

    while (resultat*resultat < a){
        resultat += pas;
    }
    return resultat;
}