#include <stdio.h>
//Составить рекурсивную функцию, печать всех чисел от 1 до N

void printNum(int current, int N) {
    //если текущее число превысило N, завершаем рекурсию
    if (current > N) {
        return;
    }
    printf("%d ", current);
    printNum(current + 1, N);
}
int main() {
    int N;
    scanf("%d", &N);    
    // Вызываем рекурсивную функцию
    printNum(1, N);   
    printf("\n");
    return 0;
}
