#include <stdio.h>
#include "classeip.h"
#include "classeipfonction.c"
int main() {
    printf("\tProgramme permettant d'identifier une adresse IP:\n");
    
    int a = 0, b = 0, c = 0, d = 0;

    // Appel de la fonction pour lire et valider l'adresse IP
    lireAdresseIP(&a, &b, &c, &d);

    // Appel de la fonction pour identifier la classe de l'adresse IP
    identifierClasse(a);

    return 0;
}
