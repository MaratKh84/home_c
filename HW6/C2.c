#include <stdio.h>

/* Составить функцию, возведение числа N в степень P. int power(n, p)
и привести пример ее использования.Формат входных данных
Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0 */

int power(int n, int p) {
    // Базовый случай: любое число в степени 0 равно 1
    if (p == 0) {
        return 1;
    }

    int result = 1;
    for(int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);

    if (n >= 1000 || p < 0) {
        printf("Error\n");
        return 1;
    }

    int result = power(n, p);
    printf("%d\n", result);
    return 0;
}
