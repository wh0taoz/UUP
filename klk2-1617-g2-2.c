#include <stdio.h>
/*
Napisati funkciju koja za uneti broj n pravi matricu kao u primeru za n=45371.
Poslednja vrsta su cifre broja, a svaka slededa gornja vrsta uvedava broj naizmenično za 2 i 1.
Prilikom sabiranja kada se dođe do 9, krede se opet od 0. Implementirati odgovarajude ispise matrice
radi testiranja.
0 1 9 3 7
9 0 8 2 6
7 8 6 0 4
6 7 5 9 3
4 5 3 7 1
*/

int main(){

    int n, m = 0, i, j, tmp;
    scanf("%d", &n);

    tmp = n;

    while (tmp>0){
        tmp /= 10;
        m++;
    }

    int mat[m][m];

    for (j = m-1; j>=0; j--){
        mat[m-1][j] = n%10;
        n/=10;
    }

    for (i = m-2; i>=0; i--){
        for (j = m-1; j>=0; j--){
            if (i%2 != 0){
                mat[i][j] = (mat[i+1][j] + 2) %10;
            }
            else if (i%2 == 0){
                mat[i][j] = (mat[i+1][j] + 1) % 10;
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
