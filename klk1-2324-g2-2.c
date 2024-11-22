int main(){

    char c;
    int i = 1, k = 1;

    while ((c = getchar()) != '\n'){
        if (c == ' '){
            i++;
            k = 0;
        }

        else if (i%2 != 0){
            c = ((c - 'a' -k + 26)%26) + 'a';
            k++;
        }
        else if (i%2 == 0){
            c = ((c - 'a' + i)%26) + 'a';
        }

        putchar(c);
    }

    return 0;
}
