c = ((c - 'a' + pomeraj) % 26) + 'a';      // ciklicna abeceda

 c = ((c - 'a' - k + 26) % 26) + 'a';        // ciklicna abeceda ako moze da ode negativno (tj kada se oduzima)

for (int i = 2; i * i <= broj; i++) {           // da li je broj prost
        if (broj % i == 0) {
            return false;
        }
    }
    return true;

int a = 1, b=1, c = 2        
a = b;
b = c;
c = a + b;                 // fibonacijev niz

 Remove spaces from the string:
    int length = strlen(s);
    int index = 0;
    for (int i = 0; i < length; i++) {
        if (s[i] != ' ') {
            s[index++] = s[i];
        }
    }
    s[index] = '\0';  // Null-terminate the cleaned string


selection sort:

 for (j = 0; j<n; j++){
        for (i = 0; i<n; i++){
            int m = i;
            for (k = i+1; k<n; k++){
               if (mat[m][j] > mat[k][j])
                m = k;
            }
            if (m != i){
                t = mat[i][j];
                mat[i][j] = mat[m][j];
                mat[m][j] = t;
            }
        }
    }

 fibonaci:
 int fib(int i) {
    if (i == 1 || i == 2) return 1;
    return fib(i - 1) + fib(i - 2);
}
