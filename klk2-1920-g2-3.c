#include <stdio.h>
#include <ctype.h>

/*Napisati program koji proverava da li je uneta linija teksta palindrom. Palindrom je
tekst koji se isto čita sa leva na desno i sa desna na levo. Pri proveri se ignorišu
razmaci, i parovi slova “nj” i “lj” se tretiraju kao jedno slovo. Pretpostavlja se da se unose
samo mala slova i znak razmaka.

Primer: i jogurt ujutru goji
Rezultat: jeste palindrom

Primer: neki tekst
Rezultat: nije palindrom

Primer: idu ljudi
Rezultat: jeste palindrom*/

int main(){

    char s[1000], tmp[1000];

    int isPalindrom = 1;
    int lenght = 0;
    int i;

    fgets(tmp, 1000, stdin);

    for (i = 0; tmp[i] != '\n'; i++){
        if ((tmp[i] == 'n' || tmp[i] == 'l') && tmp[i+1] == 'j'){
            s[lenght++] = tmp[i];
            i++;
        }
        else
            s[lenght++] = tmp[i];
    }

    s[lenght+1] = '\0';

    for (i = 0; s[i] != '\n'; i++){
        if (s[i] == ' '){
            for(int j = i; s[j] != '\n'; j++){
                s[j] = s[j+1];
            }
        }
    }

    s[i+1] = '\0';

    int k = strlen(s) - 1;
    for (int m = 0; m < ((strlen(s)-1)/2); m++){
        if (s[m] != s[k-1]){
            isPalindrom = 0;
            break;
        }
        k--;
    }

    if (isPalindrom)
        printf("jeste palindrom");
    else
        printf("nije palindrom");

    return 0;
}
