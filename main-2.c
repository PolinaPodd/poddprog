/// Лабораторная работа №3 Вариант 18

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a,b;
    
    scanf("%x",&a);
    printf("%o\n",a);
    printf("%x\n",a<<2);
    printf("%x\n",~a);
    
    scanf("%x",&b);
    printf("%x",a | b);
    
    return 0;
}
