#include <stdio.h>
#include <math.h>
// не працює
int main() {

    double a = 0;
    const double b = M_PI;
    double dx = M_PI / 20;


    printf("x\t|\ty = tan(x)\n");
    printf("----------------------\n");

    
    double x = a;
    while (x <= b) {
        double y;
        if (x == M_PI / 2) {
            
            y = INFINITY;
        } else {
            y = tan(x);
        }
        printf("%.4f\t|\t%.4f\n", x, y);
        x += dx;
    }

    return 0;
}