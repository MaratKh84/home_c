/*
В файле input.txt дана строка слов, разделенных пробелами.
 Найти самое длинное слово и вывести его в файл output.txt.
  Случай, когда самых длинных слов может быть несколько, 
  не обрабатывать.
Формат входных данных
Строка из английских букв и пробелов. Не более 1000 символов.
Формат результата
Одно слово из английских букв.
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
    // Буферы для хранения строки и текущего слова
    char buffer[1001];
    char longestWord[1001];
    int maxLength = 0;    
    // Читаем строку из файла
    while (fgets(buffer, 1001, inputFile)) {
        // Удаляем символ новой строки, если он есть
        buffer[strlen(buffer) - 1] = '\0';        
        // Инициализируем указатель на начало строки
        char *currentWord = strtok(buffer, " ");        
        // Проходим по всем словам в строке
        while (currentWord != NULL) {
            // Проверяем длину текущего слова
            int currentLength = strlen(currentWord);            
            // Если текущее слово длиннее предыдущего максимального
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longestWord, currentWord);
            }
            
            // Переходим к следующему слову
            currentWord = strtok(NULL, " ");
        }
    }   
    // Записываем результат в файл
    fprintf(outputFile, "%s\n", longestWord);
    fclose(inputFile);
    fclose(outputFile);   
    return 0;
}
