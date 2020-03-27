#include <stdio.h>
#include <stdlib.h>

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
 caseblanche=219; 

 char i;


printf ("                              --JEU DE TRAVERSE--\n \n \n");

 
  
for (l = 0 ; l<largeur ; l++){         //double boucle pour crée la forme du plateau
       for (c = 0 ; c<hauteur ; c++){
       
            plat[l][c]=(l+c)%2 ; // cela alterne entre les cases noir et blanche
       }

       
}
 
 
  for (l = 0 ; l<largeur ; l++){
  
       for (c = 0 ; c<hauteur ; c++){
       
        if (plat[l][c]==0){
            
            printf("   ");} // espace pour les cases noires }
            
            else{
            
            printf("%c%c%c", caseblanche,caseblanche,caseblanche); }  
            
       }
       printf("  %d", l+1);
       printf("\n");
  }
  printf("\n");
 printf(" A   B  C  D  E  F  G  H  I  J ");
}