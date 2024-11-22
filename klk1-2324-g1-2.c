#include <stdio.h>

int main(){

    char c;
    int k = 1;
    int cnt = 1;
    int prethodnaRec = 0;
    int slim = 0;

    while ((c = getchar()) != '\n'){

        if (c == ' '){
            k++;
            prethodnaRec = prethodnaRec - slim;
            slim = prethodnaRec;
            cnt = 1;
        }

        else if (k%2 != 0){
            c = ((c - 'a' + cnt) % 26) + 'a';
            cnt += 1;
            prethodnaRec += 1;
        }

        else if (k%2 == 0){
            c = c+prethodnaRec;
        }

        putchar(c);
    }


    return 0;
}
