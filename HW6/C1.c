#include <stdio.h>
//Составить функцию, модуль числа и привести пример ее использования.
int my_abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}
int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", my_abs(number));
    return 0;
}
