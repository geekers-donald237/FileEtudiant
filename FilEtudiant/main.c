#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#define n 1

int main(){

    File*f;
    etudiant_t tab[n];
    f = init_file(n);
    int i;
    for (i = 0 ; i < n ; i++){
        printf("Entrer les elements du tableau d'etudiants\n");
        f = enfiler(f,tab[i]);
    }
    // affiche_etudiant(tab[i]);
    afficherfile(f);

    return 0;
}