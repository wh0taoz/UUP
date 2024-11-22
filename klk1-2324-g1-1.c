#include <stdio.h>

int prost(int n){

    int prost;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prost = 0;
            return prost;
        }
    }
    prost = 1;
    return prost;

}

int pom(int arg){

    int tmp = arg;
    int div = 1;
    while (tmp > 0){
        div = div*10;
        tmp /= 10;
    }

    int cifra1 = arg%10;
    int cifra2 = (arg/10)%10;

    int broj1 = cifra1*10 + cifra2;
    int broj2 = cifra2*10 + cifra1;
    int rtrn;

    if (prost(broj1) == 1 && prost(broj2) == 1){
        rtrn = (broj1>broj2) ? broj1 : broj2;
        return rtrn;
    }
    else if (prost(broj1) == 1){
        rtrn = broj1;
        return rtrn;
    }
    else if (prost(broj2) == 1){
        rtrn = broj2;
        return rtrn;
    }

    else{
        int veci = (broj1>broj2) ? broj1:broj2;
        int temp = veci;
        while (temp>0) {
            if (prost(temp) == 1){
                return temp;
            }
            else{
                temp ++;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d ", &n);
    int x;
    while (n--){
        scanf("%d", &x);
        printf("%d ", pom(x));
    }
    return 0;
}
