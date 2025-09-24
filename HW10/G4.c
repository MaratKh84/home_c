/*
В файле input.txt даны два слова не более 100 символов каждое, 
разделенные одним пробелом. Найдите только те символы слов, которые
 встречаются в обоих словах только один раз. Напечатайте их через
  пробел в файл output.txt в лексикографическом порядке.

Формат входных данных
Два слова из маленьких английских букв через пробел. 
Длинна каждого слова не больше 100 символов.
Формат результата
Маленькие английские буквы через пробел.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100
int main() {
    FILE *inputFile, *outputFile;
    char word1[MAX_LEN + 1], word2[MAX_LEN + 1];
    int count1[26] = {0}; // Счётчик для word1
    int count2[26] = {0}; // Счётчик для word2
    char result[26];
    int resultCount = 0;
    // Открытие файла input.txt для чтения
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        return 1;
    }
    // Считывание двух слов из файла
    if (fscanf(inputFile, "%s %s", word1, word2) != 2) {
        fclose(inputFile);
        return 1;
    }
    fclose(inputFile);
    // Подсчёт частоты символов в первом слове
    for (int i = 0; word1[i] != '\0'; i++) {
        count1[word1[i] - 'a']++;
    }
    // Подсчёт частоты символов во втором слове
    for (int i = 0; word2[i] != '\0'; i++) {
        count2[word2[i] - 'a']++;
    }
    // Поиск символов, встречающихся по одному разу в каждом слове
    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            result[resultCount++] = 'a' + i;
        }
    }

    // Сортировка результата по лексикографическому порядку (уже отсортирован)
    // result[resultCount] = '\0'; // Добавление нулевого символа для корректного вывода

    // Открытие файла output.txt для записи
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Ошибка открытия файла output.txt");
        return 1;
    }
    // Запись результатов в файл
    for (int i = 0; i < resultCount; i++) {
        fprintf(outputFile, "%c", result[i]);
        if (i < resultCount - 1) {
            fprintf(outputFile, " ");
        }
    }
    fprintf(outputFile, "\n"); // Добавление новой строки в конце
    fclose(outputFile);
    return 0;
}
