#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#define n 1

File* init_file(){
    File* F;
    F = (File*)malloc(sizeof(File)*n);
    F->nb = 0;
    F->tete = 0;

    return F;

}

int pleine(File *file)
{ 
    if(file->nb == (n+1)){
        return 1;
    }else{
        return 0;
    }
}


File* enfiler(File *file, etudiant_t tab)
{
  if(pleine(file) == 0){
    file->tab[file->nb] = tab.nom;


    file->nb=file->nb+1;      
  }else{
      printf("la file est pleine");
  }
  return file;
}


int vide(File *file)
{
  if(file->nb == file->tete){
      return 1;
  }else{
      return 0;
  }
}

void affiche_etudiant(etudiant_t tabEtudiant)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\t %s\t %d\t %f\n",tabEtudiant.nom,tabEtudiant.matricule,tabEtudiant.age,tabEtudiant.moyenne);
	}
	printf("\n");
}

void afficherfile(File *file)
{
    int i;
    if(vide(file))
	    printf("La file est\n");
    else{
        printf("nom\t prenom\t age\t moyenne\t\n");
        printf("%s\t %s\t %d\t %f\n",file->tab[i].nom,file->tab[i].matricule,file->tab[i].age,file->tab[i].moyenne);

    }   
	printf("\n");
}

etudiant_t stock_etudiant(etudiant_t tabEtudiant)
{

    printf("entrer le nom de l'etudiant \n");
    scanf("%s",tabEtudiant.nom);
    printf("entrer le matricule de l'etudiant \n");
    scanf("%s",tabEtudiant.matricule);
    printf("entrer l age de l'etudiant \n");
    scanf("%d",&tabEtudiant.age);
    printf("entrer la moyenne de l'etudiant\n");
    scanf("%f",&tabEtudiant.moyenne);
    printf("\n");
	
}


