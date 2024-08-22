// Fonction pour lire et valider une adresse IP
void lireAdresseIP(int *a, int *b, int *c, int *d) {
    int valide = 0;

    // Boucle jusqu'à ce qu'une adresse IP valide soit saisie
    while (!valide) {
        printf("Veuillez taper votre adresse IP (format: x.x.x.x): ");
        scanf("%d.%d.%d.%d", a, b, c, d);

        // Vérification que chaque segment est entre 0 et 255
        if(*a >= 0 && *a <= 255 && *b >= 0 && *b <= 255 && *c >= 0 && *c <= 255 && *d >= 0 && *d <= 255) {
            valide = 1; // Adresse IP valide, on sort de la boucle
        } else {
            printf("Adresse IP invalide : Chaque octet doit être compris entre 0 et 255. Veuillez réessayer.\n");
        }
    }
}

// Fonction pour identifier la classe de l'adresse IP
void identifierClasse(int a) {
    if(a < 128){
        printf("Classe A\n");
    } else if(a >= 128 && a < 192){
        printf("Classe B\n");
    } else if(a >= 192 && a < 224){
        printf("Classe C\n");
    } else if(a >= 224 && a < 240){
        printf("Classe D\n");
    } else if(a >= 240 && a < 256){
        printf("Classe E\n");
    }
}
