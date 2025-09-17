#include <stdio.h>
// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры
int main(void)
{
int a;
int count = 0;
scanf ("%d", &a);
if (a <= 0){
        printf("error");
        return 1;
    }
  do {
        a /= 10; 
        count++;   
    } while (a > 0);
    
    if (count == 3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }  
return 0;
}
