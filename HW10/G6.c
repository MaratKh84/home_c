/*
В файле input.txt символьная строка не более 1000 символов. 
Необходимо проверить, является ли она палиндромом (палиндром читается 
одинаково в обоих направлениях). Реализовать логическую функцию
is_palindrom(str) и записать ответ в файл output.txt.

Формат входных данных
Строка из заглавных английских букв
Формат результата
YES или NO
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Логическая функция проверки палиндрома
bool is_palindrom(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    // Открываем файлы
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL || outputFile == NULL) {
        printf("Ошибка при открытии файлов!\n");
        return 1;
    }
    
    // Буфер для хранения строки
    char buffer[1001];
    
    // Читаем строку из файла
    fgets(buffer, 1001, inputFile);
    
    // Удаляем символ новой строки, если он есть
    buffer[strlen(buffer) - 1] = '\0';
    
    // Проверяем палиндром
    if (is_palindrom(buffer)) {
        fprintf(outputFile, "YES\n");
    } else {
        fprintf(outputFile, "NO\n");
    }
    
    // Закрываем файлы
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
