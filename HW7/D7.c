#include <stdio.h>
//Составить рекурсивную функцию, печать всех чисел от N до 1

void printNum(int current) {
    //если текущее число меньше 1, завершаем рекурсию
    if (current < 1) {
        return;
    }
    printf("%d ", current);
    printNum(current - 1);
}
int main() {
    int N;
    scanf("%d", &N);    
    
     if (N < 1) {
        printf("ERROR\n");
        return 1;
 }       
    printNum(N);
    printf("\n");
    return 0;
}

