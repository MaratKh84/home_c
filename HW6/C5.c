#include <stdio.h>
/*Составить функцию, которая определяет сумму всех чисел от 1 до N
  и привести пример ее использования.
Формат входных данных - одно целое положительное число N
Формат результата - целое число - сумма чисел от 1 до N*/

// Функция для вычисления суммы чисел от 1 до N
int sum_numbers(int n) {
    if (n <= 0) {
        return -1;
    }
    
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n, result;
    scanf("%d", &n);
    if (n <= 0) {
        printf("ERROR\n");
        return 1;
    }
    result = sum_numbers(n);
    printf("%d\n", result);
    return 0;
}
