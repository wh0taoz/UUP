#include <stdio.h>
#include <ctype.h>

/*Napisati program koji menja unetu rečenicu koja se čuva kao string tako što izbacuje
sve reči koje počinju i završavaju se malim slovom. Pretpostavlja se da se unose samo slova i znak
razmaka (space).
Primer: Recenice se Ne pisu ovakO
Rezultat: Recenice Ne ovakO*/

int main(){

    int i, k = 0, isPrint = 0;
    char s[1000], tmp[128];

    fgets(s, 1000, stdin);

    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ' || s[i] == '\n'){
            if ((tmp[0]>= 'A' && tmp[0]<='Z') || (tmp[k-1]>= 'A' && tmp[k-1]<='Z')){
                isPrint = 1;
            }
            if (isPrint == 1){
                tmp[k] = '\0';
                fputs(tmp, stdout);
                putchar(' ');
            }
            isPrint = 0;
            k = 0;
        }
        else {
            tmp[k]=s[i];
            k++;
        }
    }
    return 0;
}
