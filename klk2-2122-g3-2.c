#include <stdio.h>
/*
Napisati program u kojem korisnik unosi matricu veličine n x m. Za svaku kolonu matrice
proveriti da li je palindrom. Kolona je palindrom ako se brojevi poklapaju kada se čita odozgo
nadole i odozdo nagore. Ako kolona nije palindrom, treba je rotirati k puta, gde k predstavlja
najveći element te kolone. Na kraju ispisati promenjenu matricu.
Napomena: Nije dozvoljeno koristiti dodatne nizove i/ili matrice.
Primer:    Rezultat:
4 5
1 2 2 2    6 2 1 2
6 3 1 1    7 3 3 1
5 8 1 1    1 8 1 1
6 3 3 1    6 3 2 1
7 2 1 2    5 2 1 2
*/

int main(){

    int m, n, i, j;
    scanf("%d %d", &m, &n);

    int mat[m][n];

    for (i = 0; i<m; i++){
        for (j = 0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for (j = 0; j<n; j++){
        int isPalindrom = 1;
        int tmp = m-1;

        for (i = 0; i<m/2; i++){
            if (mat[i][j] != mat[tmp][j]){
                isPalindrom = 0;
                break;
            }
            tmp--;
        }
        if (!isPalindrom){
            int maxElement = mat[0][j];
            for (i = 0; i<m; i++){
                if (maxElement < mat[i][j]) {
                    maxElement = mat[i][j];
                }
            }

            int k = maxElement % m;
            while (k>0){
                int last = mat[m - 1][j];
                for (i = m-1; i>0; i--){
                    mat[i][j] = mat[i-1][j];
                }
                mat[0][j] = last;
                k--;
            }
        }
    }
    for (i = 0; i<m; i++){
        for (j = 0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
