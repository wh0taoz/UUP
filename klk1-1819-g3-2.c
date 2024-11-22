#include <stdio.h>

int main(){

    char c;
    int broj = 0;
    int suma = 0;
    int k = 0;
    int validan = 1;
    while ((c = getchar()) != '\n'){
        if (c>='0' && c<='9'){
            broj = broj*10 + (c - '0');
            k++;
        }
        else {
            int brojac = broj;

            while (brojac>0){
                int c1 = brojac%10;
                brojac = brojac/10;
                if (c1 == 1 || c1 == 6){
                    validan = 0;
                }
            }

            if (validan == 1){
                suma += broj;
            }

            k = 0;
            broj = 0;
            validan = 1;
        }
    }

    printf("%d", suma);

    return 0;
}
