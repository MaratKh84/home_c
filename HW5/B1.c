#include <stdio.h>

int main() 
{
    int n;
    //printf("Enter a natural number (up to 100):\n ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 100) {
        printf("error");
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        int square = i * i;     // вычисляем квадрат
        int cube = i * i * i;   // вычисляем куб
        printf("%d %d %d\n", i, square, cube);
    }
    
    return 0;
}
