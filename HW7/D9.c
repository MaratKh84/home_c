#include <stdio.h>

/* Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию 
int sum_digits(int n)*/

int sum(int n) {
    // Базовый случай
    if (n < 10) {
        return n;
    }
    
    /* Рекурсивный случай: Возвращаем последнюю цифру (n % 10) + сумму
     остальнsх цифр */
    return (n % 10) + sum(n / 10);
}
int main() {
    int number;
    scanf("%d", &number);
    if (number <= 0) {
        printf("ERROR");
        return 1;
    }
    int result = sum(number);   
    printf("%d\n", result);   
    return 0;
}
