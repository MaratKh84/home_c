#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a, b, max, min;
scanf ("%d %d", &a, &b); 
if (a>b){
max=a;
min=b;}
else{
max=b;
min=a;}
printf("%d %d\n", min, max); 
return 0; 
}

