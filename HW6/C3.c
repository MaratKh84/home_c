#include <stdio.h>
/*Написать функцию, которая возвращает среднее арифметическое двух 
 переданных ей аргументов (параметров). int middle(int a, int b)
Формат входных данных - два целых не отрицательных числа.
Формат результата - одно целое число */

// Функция для вычисления среднего арифметического
int middle(int a, int b) {
    if (a < 0 || b < 0) {
        return -1; 
    }
    return (a + b) / 2;
}
int main() {
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("ERROR\n");
        return 1;
    }
    result = middle(num1, num2);
    printf("%d\n", result);
    return 0;
}
