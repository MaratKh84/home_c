#include <stdio.h>
/*Составить рекурсивную функцию, которая определяет сумму всех чисел
 от 1 до N*/

int sumNumbers(int n) {
    // если n <= 1, возвращаем n
    if (n <= 1) {
        return n;
    }   
    // Рекурсивный случай: возвращаем n + сумму чисел до n-1
    return n + sumNumbers(n - 1);
}
int main() {
    int N;
    scanf("%d", &N);
    if (N < 1) {
        printf("ERROR\n");
        return 1;
    }
    int result = sumNumbers(N);
    printf("%d\n", result);    
    return 0;
}
