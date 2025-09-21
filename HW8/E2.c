/*
Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
Формат входных данных - 5 целых чисел через пробел
Формат результата - Одно единственное целое число 
 */

#include <stdio.h>
int main() {
    int arr[5];    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }   
    int min = arr[0]; 
    for(int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    printf("%d\n", min);  
    return 0;
}
