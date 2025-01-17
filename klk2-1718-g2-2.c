#include <stdio.h>
/*
Napisati funkciju koja za uneti broj n pravi kvadratnu matricu kao u datim primerima,
cifre broja se postavljaju na središnju kolonu, ili na dve središnje kolone ako je parna dimenzija
matrice, a zatim se kolone popunjavaju redom dupliranim brojevima, kada se dođe do 9, slededi broj
je 0. U slučaju neparne dimenzije cifra sa središnje kolone se uvek duplira u koloni ispod.

n=45901     n=9622    n=90
5 6 0 1 2   0 7 3 3   9 0
5 6 0 1 2   9 6 2 2   9 0
4 5 9 0 1   9 6 2 2
4 5 9 0 1   8 5 1 1
3 4 8 9 0
*/

int main(){

    int n, m = 0, tmp, i, j;

    scanf("%d", &n);

    tmp = n;
    while (tmp>0){
        tmp/=10;
        m++;
    }

    int mat[m][m];

    if (m==2){
        mat[0][1] = n%10;
        mat[0][0] = n/10;
        mat[1][0] = mat[0][0];
        mat[1][1] = mat[0][1];

    }

    else if (m%2 != 0){
        for (j = m-1; j>=0; j--){
            mat[m/2][j] = n%10;
            n /= 10;
        }
        for (i = m/2 + 1; i<m; i++){
            for (j = 0; j<m; j++){
                if (mat[i-1][j] == mat[i-2][j]){
                    mat[i][j] = (mat[i-1][j] + 9)%10;
                }
                else{
                    mat[i][j] = mat[i-1][j];
                }
            }
        }

        for (i = m/2 - 1; i>=0; i--){
            for (j = 0; j<m; j++){
                if (mat[i+1][j] == mat[i+2][j]){
                    mat[i][j] = (mat[i+1][j] + 1)%10;
                }
                else{
                    mat[i][j] = mat[i+1][j];
                }
            }
        }
    }

    else if (m%2 == 0){
        for (j = m-1; j>=0; j--){
            mat[m/2 - 1][j] = n%10;
            n /= 10;
        }
        for (i = m/2; i<m; i++){
            for (j = 0; j<m; j++){
                if (mat[i-1][j] == mat[i-2][j]){
                    mat[i][j] = (mat[i-1][j] + 9)%10;
                }
                else{
                    mat[i][j] = mat[i-1][j];
                }
            }
        }
        for (i = m/2 - 1; i>=0; i--){
            for (j = 0; j<m; j++){
                if (mat[i+1][j] == mat[i+2][j]){
                    mat[i][j] = (mat[i+1][j] + 1)%10;
                }
                else{
                    mat[i][j] = mat[i+1][j];
                }
            }
        }
    }

    for (i=0; i<m; i++){
        for (j = 0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
