#include <stdio.h>
#include <math.h>

int main(){

	char c1, trenutni = ' ', prethodni, sledeci;
	int c2 = 0,c3 = 0, k = 0, dev = 1, i = 1;

	while ((c1 = getchar()) != '\n'){
    	if (c1 < '0' || c1 > '9') {
        	prethodni = trenutni;
        	trenutni = c1;
        	if (prethodni == trenutni && k>0) {
            	while (k>0){
                	c3 = ((c2%10 + i) % 10)*(int)pow(10, (k-1)) + c3;
                	c2/=10;
                	k--;
                	i++;

            	}
            	printf("%d", c3);
            	i = 1;
            	c3 =0;
            	c2 = 0;
            	dev = 1;
        	}
        	else if (prethodni != trenutni && k>0){
                int kv = k;
            	while (k>0){
                	c3 = (c2%10)*(int)pow(10, (k-1)) + c3;
                	c2/=10;
                	k--;
            	}
            	c3 = c3%(kv*kv);
            	printf("%d", c3);
            	i = 1;
            	c3 =0;
            	c2 = 0;
            	dev = 1;
        	}

        	putchar(c1);
    	}
    	else if (c1>= '0' && c1<= '9'){
        	k++;
        	c2 = c2 + (c1 - '0') * dev;
        	dev = dev*10;


    	}

	}


	return 0;
}
