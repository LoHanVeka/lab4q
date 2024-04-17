#include <stdio.h>
#include <math.h>

float function(int x, int y, int z) {
    
    if (1 + x == 0 || (1 - y) <= 0) {
        printf("Для заданих значень y та x у обчислюваному виразі виконується ділення на 0 або логарифмування від недопустимого значення. Задайте інші значення\n");
        return 0;
    }
    
    float t = log2((1 - y) / (1 + x) + z);
    return t;
}

int main() {
    int x, y, z;
    float result;
    
    do {
        printf("Введіть значення x, y, z: ");
        scanf("%d %d %d", &x, &y, &z);
        
        result = function(x, y, z);
        if (result != 0) {
            printf("Результат обчислення функції: %f\n", result);
        }
    } while (result == 0); 
    return 0;
}