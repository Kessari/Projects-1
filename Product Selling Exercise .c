#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int code;
    char nom[50];
    double prix;
    int quantite;
} Produit;

Produit produits[] = {
    {1, "Coca-Cola", 1.5, 10},
    {2, "Chips", 2, 8},
    {3, "Bonbons", 0.5, 15},
    {4, "Barre chocolatée", 1, 12},
};


void afficher_produits() {
    printf("Liste des produits :\n");
    int i;
    for (i = 0; i < 4; i++) {
        printf("%d. %s - %.2f DH il a %d peas \n", produits[i].code, produits[i].nom, produits[i].prix,produits[i].quantite);
    }
}

Produit chercher_produit(int code) {
    Produit produit_null = {0, "", 0.0, 0};
    int i;
    for (i = 0; i <4 ; i++) {
        if (produits[i].code == code) {
            return produits[i];
        }
    }
    return produit_null;
}

int main() {
    afficher_produits();

    int code;
    printf("Entrez le code du produit à acheter : ");
    scanf("%d", &code);

    Produit produit = chercher_produit(code);
    if (produit.code == 0) {
        printf("Produit non trouvé.\n");
        return 1;
    }

    int quantite;
    printf("Entrez la quantité à acheter : ");
    scanf("%d", &quantite);

    if (produit.quantite < quantite) {
        printf("Quantité insuffisante.\n");
        return 1;
    }

    double paiement;
    printf("Entrez le montant de paiement : ");
    scanf("%lf", &paiement);

    double montant_total = produit.prix * quantite;
    double change = paiement - montant_total;
    if (change < 0) {
        printf("Paiement insuffisant.\n");
        return 1;
    }

    int i,x;
    for (i = 0; i < 4; i++) {
        if (produits[i].code == code) {
            produits[i].quantite -= quantite;
            x = produits[i].quantite ;
            break;
        }
    }

    printf("Ticket de caisse :\n");
    printf("%s - %.2f DH x %d = %.2f DH\n", produit.nom, produit.prix, quantite, montant_total);
    printf("Paiement : %.2f DH\n", paiement);
    printf("Change : %.2f DH\n", change);
    printf("Remaining quantity :%d", x);

    return 0;
}
