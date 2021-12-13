/// Лабораторная работа № 2 Вариант 18

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    float z1,z2; 
    float a;
    scanf("%f",&a);
    z1=((((a+2)/(sqrt(2*a)))-(a/(sqrt(2*a)+2))+(2/(a-sqrt(2*a))))*((sqrt(a)-sqrt(2))/(a+2))); 
    z2=1/(sqrt(a)+sqrt(2));
    printf("%f\n",z1); /
    printf("%f",z2);
}
