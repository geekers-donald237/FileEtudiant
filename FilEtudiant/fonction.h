#ifndef __FONCTION_H__
#define __FONCTION_H__
#define n 1

typedef struct etudiant_t etudiant_t;
struct etudiant_t
{ 
    char nom[50];
    int age;
    char matricule[50];
    float moyenne;
};

typedef struct File File;
struct File
{
   
    int tete;
    int nb;
    etudiant_t tab[];
};

File* init_file();

int vide(File *file);

etudiant_t stock_etudiant(etudiant_t tabEtudiant);

int pleine(File *file);

File* enfiler(File*file, etudiant_t tab);

void affiche_etudiant(etudiant_t tabEtudiant);

void afficherfile(File *file);


#endif 