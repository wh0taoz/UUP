#include <stdio.h>
#include <math.h>
/*
Napisati dve funkcije koje izračunavaju sledeći koren, jedna iterativno a druga
rekurzivno za dato n.
U primeru je n=6;
*/

double f_r(int n){
    if (n==1){
        return sqrt(2.0/1);
    }
    else{
        return sqrt((double)(n%2+1)/n + f_r(n-1));
    }

}

double f_i(int n){

    double result = 0.0;
    for (int i=1; i<=n; i++){
        result = sqrt(result + (double)(i % 2 + 1) / i);
    }
    return result;
}


int main(){
    int n;
    scanf("%d", &n);

    printf("Recursive: %.6lf\n", f_r(n));
    printf("Iterative: %.6lf", f_i(n));

}
