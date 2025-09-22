/*
Дан целочисленный массив из 30 элементов. Элементы массива могут 
принимать произвольные целые значения помещающиеся в int. Необходимо 
создать функцию, которая находит и выводит в порядке возрастания номера
 двух элементов массива, сумма которых минимальна. Формат входных 
 данных - последовательность из 30 целых чисел через пробел. 
 Формат результата - два целых числа через пробел
 */

#include <stdio.h>
#include <limits.h> // Для использования INT_MAX
// Функция для поиска двух элементов массива с минимальной суммой
void findMinSumIndices(int arr[], int n) {
    int minSum = INT_MAX; // Инициализация мин. суммы максимально возможным значением
    int index1 = -1, index2 = -1; // Индексы элементов с минимальной суммой
    // перебор всех возможных пар элементов
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            int currentSum = arr[i] + arr[j];

            if (currentSum < minSum) {
                minSum = currentSum;
                if (i < j) {
                    index1 = i;
                    index2 = j;
                } else {
                    index1 = j;
                    index2 = i;
                }
            }
        }
    }
    printf("%d %d\n", index1, index2);
}

int main() {
    const int ARRAY_SIZE = 30;
    int arr[ARRAY_SIZE];
    // Ввод 30 целых чисел через пробел
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    // Вызов функции для поиска и вывода индексов
    findMinSumIndices(arr, ARRAY_SIZE);
    return 0;
}
