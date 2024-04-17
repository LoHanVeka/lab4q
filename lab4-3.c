#include <stdio.h>

int main() {
    int s, p, j, i;
    p = 0; 
    for (i = 1; i <= 25; i++) { 
        s = 1; 
        for (j = 1; j <= i; j++) {
            s *= ((j + i) / 2); 
        }
        p += s;
    }
    printf("p=%d\n", p);
    return 0; 
}