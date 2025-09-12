#include <stdio.h>
//Определить уравнение прямой по координатам двух точек. 
//Уравнение вида y=k*x+b
int main(void)
{
int x1, y1, x2, y2;
float k, b;
scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
k = (float)(y1 - y2) / (x1 - x2);//k по формуле k=(y1 — y2)/(x1 — x2)
b = (float)y2 - k * x2;//b по формуле b=y2—k*x2
printf("%.2f %.2f\n", k, b);
return 0;
}
