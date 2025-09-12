#include <stdio.h>
int main(void)
{
int x;
scanf ("%d", &x);
if (x == 12 || x == 1 || x == 2) {  
        printf("winter\n");  
    } else if (x >= 3 && x <= 5) {  
        printf("spring\n");  
    } else if (x >= 6 && x <= 8) {  
        printf("summer\n");  
    } else {  
        printf("autumn\n");  
    }   
return 0;
}
