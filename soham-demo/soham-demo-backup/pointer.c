#include<stdio.h>
void main ()  {
    int a = 10, *p1, **p2;

    p1 = &a;
    p2 = &p1;

    printf("Value of a is %d ", *p1);
    printf("\nMemory address of a is %d ", p1);
    printf("\nValue of a is %d ", **p2);
    printf("\nMemory address of p1 is %d ", p2);

}