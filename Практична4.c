#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Некоректне число. Введіть число в межах 1 < n < 150.\n");
        return 1;
    }

    for (int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);
    return 0;
}