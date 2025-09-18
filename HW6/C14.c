#include <stdio.h>
/*Составить функцию логическую функцию, которая определяет, верно ли,
что сумма его цифр – четное число. Используя эту функцию решить задачу.
Формат входных данных-одно целое не отрицательное число
Формат результата-ответ YES или NO*/

// Логическая функция проверки четности суммы цифр
int is_sum_even(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    
    // Проверяем, является ли сумма четной. 
    //Возвращаем true (1), если сумма четная, иначе false (0)
    return (sum % 2 == 0);
}

int main() {
    int number;
    scanf("%d", &number);
  
    if (number < 0) {
        printf("ERROR\n");
        return 1;
    }
    if (is_sum_even(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    } 
    return 0;
}
