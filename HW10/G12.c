/*
В файле input.txt дано предложение требуется разобрать его на отдельные
 слова. Напечатать каждое слово на отдельной строке в файл output.txt.

Формат входных данных
Одна строка из английских букв и пробелов не более 1000 символов.
Формат результата
Каждое слово на отдельной строке
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL || outputFile == NULL) {
        return 1;
    }    
    // Буфер для хранения строки
    char buffer[1001];    
    // Читаем строку из файла
    fgets(buffer, 1001, inputFile);    
    // Удаляем символ новой строки, если он есть
    buffer[strlen(buffer) - 1] = '\0';    
    // Инициализируем указатель на начало строки
    char *currentWord = strtok(buffer, " ");    
    // Проходим по всем словам в строке
    while (currentWord != NULL) {
        // Записываем слово в файл
        fprintf(outputFile, "%s\n", currentWord);        
        // Переходим к следующему слову
        currentWord = strtok(NULL, " ");
    }

    fclose(inputFile);
    fclose(outputFile);    
    return 0;
}
