#include <stdio.h>

int main()
{
    int r, c;
    
    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &r);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &c);
    printf("Entrez les éléments de la matrice :\n");
    int t[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &t[i][j]);
        }
    }
    int min = t[0][0];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(t[i][j] < min)
            {
                min = t[i][j];
            }
        }
    }

    printf("Le minimum dans la matrice est : %d", min);

    return 0;
}
