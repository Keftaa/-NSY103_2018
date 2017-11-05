#include <stdio.h>

/* 
Suite a une erreur dans mon programme, j'ai constate qu'il fallait soit:
1- Que j'ecrive toute la fonction est_chiffre avant la fonction main.
2- Que je delcare seuleument la fonction est_chiffre avant la fonction main.

Puisque j'avais deja ecrit la fonction au dessous, j'ai choisi la deuxieme option.
Dans Java, un tel ordonnement de declaration fonctions n'est pas necessaire.
*/
int est_chiffre (char c);
int est_lettre(char c);
int main() {
    char c;
    printf("Entrez un caractere : ");
    c = getchar();

    printf("Voici le caractere entre : %c \n", c);
    if(est_chiffre(c) == 1){
        printf("C'est un chiffre\n");
    } else {
        printf("Ce n'est pas un chiffre\n");
    }
    if(est_lettre(c)==1){
        printf("C'est une lettre\n");
     } else {
        printf("Ce n'est pas une lettre\n");
     }
    return 0;
}

int est_chiffre (char c) {

    if( c >= '0' && c <= '9' ){
        return 1;
    }
    // if retourne deja 1, pas besoin de else
    return 0;
}

int est_lettre (char c) {
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ){
         return 1;
    }
    return 0;
}
