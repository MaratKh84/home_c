/*
Считать число N из файла input.txt. Сформировать строку из N символов. 
N четное число, не превосходящее 26. На четных позициях должны 
находится четные цифры в порядке возрастания, кроме 0, на нечетных 
позициях - заглавные буквы в порядке следования в английском алфавите. 
Результат записать в файл output.txt
Формат входных данных - четное N ≤ 26
Формат результата - строка из английских букв и цифр
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Открываем файлы для чтения и записи
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error open files!\n");
        return 1;
    }   
    int N;
    // Считываем число N из файла
    fscanf(inputFile, "%d", &N);    
    // Проверяем корректность введенного числа
    if (N <= 0 || N > 26 || N % 2 != 0) {
        fclose(inputFile);
        fclose(outputFile);
        return 1;
    }    
    // Создаем массив result для хранения результата
    char result[N + 1];
    result[N] = '\0';  // Завершающий ноль для строки    
    // Индексы для цифр и букв
    int digitIndex = 2;  // Начинаем с 2, так как 0 исключен
    int letterIndex = 0;  // A = 65 в ASCII
    
    // Заполняем строку по условию
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {  // Нечетная позиция (0, 2, 4...)
            // Заглавные буквы от A до Z
            result[i] = 'A' + letterIndex;
            letterIndex++;
        } else {  // Четная позиция (1, 3, 5...)
            // Четные цифры от 2 до 8
            result[i] = digitIndex + '0';
            digitIndex += 2;
            if (digitIndex > 8) digitIndex = 2;  // Обнуляем при достижении 8
        }
    }
    
    // Записываем результат в файл
    fprintf(outputFile, "%s\n", result);
    fclose(inputFile);
    fclose(outputFile);   
    return 0;
}
