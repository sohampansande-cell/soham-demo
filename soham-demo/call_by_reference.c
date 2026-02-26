#include<stdio.h>
void add(int *a) {
    *a += 10;
    printf("\nValue inside fun is %d  :  %d", a, *a);
}
int main () {
    int a =10;
    printf("Value before fun call is %d  :  %d\n",a, &a);
    add(&a);
    printf("Value after fun call is %d  :  %d", a, &a);
}