#include <stdio.h>

/*
Napisati funkciju koja za uneti broj n pravi matricu kao u primeru za n=45371. Prva
vrsta matrice su cifre broja, svaka sledeća donja vrsta umanjuje broj iz gornje vrste naizmenično za 1
i 2. Prilikom oduzimanja kada se dođe do 0, kreće se opet od 9. Implementirati odgovarajuće ispise
matrice radi testiranja.
4 5 3 7 1
3 4 2 6 0
1 2 0 4 8
0 1 9 3 7
8 9 7 1 6
*/

int main(){

    int n, m = 0, tmp, i, j;
    scanf("%d", &n);
    tmp = n;
    while (tmp>0){
        tmp /= 10;
        m++;
    }

    int mat[m][m];

    for (j = m-1; j>=0; j--){
        mat[0][j] = n%10;
        n/=10;
    }

    for (i = 1; i<m; i++){
        for (j = 0; j<m; j++){
            if (i%2 != 0){
                mat[i][j] = (mat[i-1][j] + 9) % 10;
            }
            else if (i%2 == 0){
                mat[i][j] = (mat[i-1][j] + 8) % 10;
            }
        }
    }


    for (i = 0; i<m; i++){
        for (j = 0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }



    return 0;
}
