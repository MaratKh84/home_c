#include <stdio.h>
int main(void)
{
int x1, x2;
scanf ("%d%d", &x1, &x2);
if (x1 > x2) {  
        printf("Above\n");  
    } else if (x1 < x2) {  
        printf("Less\n");  
    } else if (x1 == x2) {  
        printf("Equal\n");    
    }   
return 0;
}
