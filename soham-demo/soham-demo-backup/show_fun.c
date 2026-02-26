#include<stdio.h>
void add();
int sub();
void Multi(int, int);
float div(int, int);
void main() {
    add();
    printf("SUB: %d \n", sub());
    Multi(34,77);
    printf("div: %f \n", div(100, 5));
}
void add() {
    int x =56, y = 66;
    printf("SUM: %d \n",(x+y));
}
int sub() {
    return 1009 - 456;
}
void Multi(int a, int b) {
    printf("MULTI: %d \n",(a*b));
}
float div(int a, int b) {
    return (float)a/b;
}