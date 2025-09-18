#include <stdio.h>
/*Составить функцию вычисления N!. Использовать ее при вычислении 
факториала int factorial(int n)
Формат входных данных - целое положительное число не больше 20
Формат результата - целое положительное число*/

// Функция вычисления факториала
long long factorial(int n) {
    // Проверяем корректность входного параметра
    if (n < 0 || n > 20) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    long long result;
    scanf("%d", &n);
    if (n < 0 || n > 20) {
        printf("ERROR\n");
        return 1;
    }   
    result = factorial(n);
    printf("%lld\n", result);
    return 0;
}
