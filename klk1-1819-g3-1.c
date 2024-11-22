#include <stdio.h>

int pom(int n){

    int dev = 1;
    int brojac = n;
    while(brojac>0){
        brojac /= 10;
        dev = dev*10;
    }

    int cifra1, cifra2;
    cifra1 = n%10;
    cifra2 = n/(dev/10);

    int kvadrat_zbira = (cifra1 + cifra2)*(cifra1 + cifra2);

    return kvadrat_zbira;
}

int oskudan(int n){

    int suma = 0;
    int d = 1;

    while(d<n){
        if (n%d==0){
            suma = suma + d;
        }
        d = d+1;
    }

    int Oskudan = 0;
    if (suma>0 && suma<n){
        Oskudan = 1;
    }

    return Oskudan;
}

int main(){

    int i1, i2;
    scanf("%d %d", &i1, &i2);
    int jesteOskudan;
    int kvadratZbira;

    while (i1<=i2){

        kvadratZbira = pom(i1);
        jesteOskudan = oskudan(i1);

        if (jesteOskudan == 1){
            if (kvadratZbira<i1){
                printf("%d ", i1);
            }
        }

        i1++;
    }

    return 0;
}


