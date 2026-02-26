#include<stdio.h>
void add(int a) {
    a += 10;
    printf("Value inside function is %d   %d", a, &a);
}

int main () {
    int a =10;
    printf("Value before func  call is  %d  %d\n", a, &a);
    add(a);
    printf("\nValue ater fun call is %d : %d", a, &a);
    return 0;
}