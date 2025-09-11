#include <stdio.h>

int main(void) {
	int x; 
	int max;
scanf("%d", &x);
int a = x / 100;
int b = (x / 10) % 10;
int c = x % 10;

max = a > b ? a : b;
max = max> c ? max: c;

    printf("%d\n", max);
    return 0;
}
