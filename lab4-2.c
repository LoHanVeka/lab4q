#include <stdio.h>
#include <math.h>

int main() {
    int b;
    unsigned long long int product;

    do {
        printf("\nОберіть що ви хочете зробити:\n");
        printf("1. Запустити перший цикл\n");
        printf("2. Запустити другий цикл\n");
        printf("3. Запустити третій цикл\n");
        printf("0. Вийти з програми\n");
        printf("Введіть номер опції:");
        scanf("%d", &b);

        switch (b) {
            case 1: {
                int sum = 0;
                for (int i = 11; i <= 100; i += 11) {
                    sum += i;
                }
                product = sum * sum;
                break;
            }
            case 2: {
                int sum = 0;
                int i = 11;
                while (i <= 100) {
                    sum += i;
                    i += 11;
                }
                product = sum * sum;
                break;
            }
            case 3: {
                int sum = 0;
                int i = 11;
                do {
                    sum += i;
                    i += 11;
                } while (i <= 100);
                product = sum * sum;
                break;
            }
            case 0:
                printf("Програма завершила свою роботу\n");
                return 0;
            default:
                printf("Неправильна цифра\n");
                break;
        }

        if (b > 0 && b < 4) {
            printf("f = %llu\n", product);
        }

    } while (b != 0);

    return 0;
}