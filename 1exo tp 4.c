#include <stdio.h>

void supprimer_nuls(int *vecteur, int taille) {
    int i, j;
    for (i = 0, j = 0; i < taille; i++) {
        if (vecteur[i] != 0) {
            vecteur[j++] = vecteur[i];
        }
    }
    while (j < taille) {
        vecteur[j++] = 0;
    }
}

int main() {
    int vecteur[] = {0, 1, 0, 3, 0, 5, 6, 0, 8, 0};
    int taille = sizeof(vecteur) / sizeof(vecteur[0]);
    supprimer_nuls(vecteur, taille);
    int i;
    for (i = 0; i < taille; i++) {
        printf("%d ", vecteur[i]);
    }
    printf("\n");
    return 0;
}
