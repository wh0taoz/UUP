#include <stdio.h>
#include <math.h>
/*
*/

double f_r(int n, int i){
    if (n == i){
            return 0.0;
    }
    else if(i%2 == 0){
        return i*sqrt((double)i/pow(i+1, 2) + f_r(n, i+1));
    }
    else if(i%2 == 1){
        return sqrt((double)i/(i+1) + f_r(n, i+1));
    }
}

double f_i(int n){
    double result = 0.0;
    for (int i = n; i>0; i--){
        if (i%2 == 0){
            result = i*sqrt(result + (double)i/pow(i+1, 2));
        }
        else{
            result = sqrt(result + (double)i/(i+1));
        }
    }
    return result;
}

int main(){
    int n;
    scanf("%d", &n);

    printf("Recursive: %lf\n", f_r(n+1, 1));
    printf("Iterative: %lf", f_i(n));

    return 0;
}
