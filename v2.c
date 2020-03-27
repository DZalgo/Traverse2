#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 10


int main(void) {


  int l,c; // indices pour le tableau ( lignes et colonnes)
  int plat[N][N]; // le tableau de 10x10
  int largeur, hauteur; // pour les dimensions
  largeur = N;
  hauteur = N;

  typedef struct pion pion; 
  typedef struct pos pos;
  typedef struct pospion postion;
  typedef struct joueur joueur;

  struct pos{
    int x;
    int y;
};

struct pospion {
    pion *caseoccuper;
};
struct pion {
    pos pos;
    int type;
    char forme;
    joueur *player;
};

 char caseblanche;
 caseblanche=300; // c'est 

printf ("                              --JEU DU TRAVERSE--\n \n \n");

 
  
for (l = 0 ; l<largeur-1 ; l++){         //double boucle pour crée la forme du plateau
   
       for (c = 0 ; c<hauteur-1 ; c++){
       
            plat[l][c]=(l+c)%2 ; // cela alterne entre les cases noir et blanche
       }
  }
 
 
  for (l = 0 ; l<largeur-1 ; l++){
  
       for (c = 0 ; c<hauteur-1 ; c++){
       
        if (plat[l][c]==0){
            
            printf(" ");} // espace pour les cases noires }
            
            else{
            
            printf("%c", caseblanche); }  
            
       }
       printf("\n");
  }
}