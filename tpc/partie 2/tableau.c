#include <stdio.h>
#include <stdlib.h>
#define TAILLE 5

int main(){
    char tab[TAILLE+1];
    int i = 0;
    printf("Entrez %d caracteres suivit de Entree: ", TAILLE);
    while(i<TAILLE){
        tab[i] = getchar();
        i++;
    }

     printf("%s", tab);
     printf("\n");
     return 0;
}
