#include <stdio.h>

void print_num(int num) {
    // Базовый случай рекурсии: если число меньше 10, печатаем его
    if (num < 10) {
        printf("%d", num);
        return;
    }
    print_num(num / 10);
    printf(" %d", num % 10);
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 0) {
        printf("ERROR\n");
        return 1;
    }
    print_num(N);
    printf("\n"); // Добавляем новую строку в конце вывода
    return 0;
}
