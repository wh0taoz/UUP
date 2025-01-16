#include <stdio.h>
/*Napisati program koji menja unetu rečenice koja se čuva kao string tako što izbacuje sve
reči koje imaju manje od n karaktera, broj n unosi korisnik.
Pretpostavlja se da se unose samo slova i
znak razmaka (space). Primer za n=5.
Primer: Recenica koja ima nekoliko reci
Rezultat: Recenica nekoliko*/

int main(){

    int n, i, k = 0;
    char s[1000], tmp[128];

    fgets(s, 1000, stdin);
    scanf("%d", &n);

    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ' || s[i] == '\n'){
            if (k >= n){
                tmp[k] = '\0';
                fputs(tmp, stdout);
                putchar(' ');

            }
        k = 0;
        }
        else{
            tmp[k] = s[i];
            k++;
        }
    }

    return 0;
}
