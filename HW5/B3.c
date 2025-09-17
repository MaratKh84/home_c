#include <stdio.h>

int main() 
{
    int a, b, sum=0;

    scanf("%d%d", &a, &b);
    
    if (a > b || a > 100 || b > 100){
        printf("error");
        return 1;
    }
    
    for (int i = a; i <= b; i++) {
        int square = i * i;     // вычисляем квадрат
        sum = sum + square;  
        
    }
    printf("%d ", sum);
    return 0;
}
