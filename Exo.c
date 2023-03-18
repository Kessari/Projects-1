void tri_decroissant(int tab[], int taille) {
    int i, j, max, temp;

    for(i=0; i<taille-1; i++) {
        max = i;
        for(j=i+1; j<taille; j++) {
            if(tab[j] > tab[max]) {
                max = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[max];
        tab[max] = temp;
    }
}
