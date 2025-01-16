#include <stdio.h>
#include <string.h>

/*
Napisati program koji učitava string koji sadrži reči razdvojene spejsom i nad njim vrši
sledeće izmene: iz reči koje sadrže neparan broj samoglasnika uklanja sve suglasnike, a iz reči
koje sadrže paran broj samoglasnika uklanja sve samoglasnike. Potrebno je održati isti broj
razmaka u stringu, tj. održati da razmaci između reči ostanu po jedna praznina, tj. spejs.
Upotreba pomoćnih stringova nije dozvoljena.
Primeri: Ulaz: rad radja ideje Izlaz: a rdj iee
Ulaz: neuspeh je predah za buducu pobedu Izlaz: eue e prdh a uuu oeu
*/

int main(){

    char s[1000];
    int i, k = 0, wordStart = 0;

    fgets(s, 1000, stdin);

    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ' || s[i] == '\n'){
            if (k%2 != 0){
                for (int j = wordStart; j<i; j++){
                    if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                        putchar(s[j]);
                }
            }
            if (k%2 == 0){
                for (int j = wordStart; j<i; j++){
                    if (s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u')
                        putchar(s[j]);
                }

            }
            putchar(' ');
            wordStart = i+1;
            k = 0;
        }

        else{
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                k++;
            }
        }
    }

    return 0;
}
