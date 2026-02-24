#include<stdio.h>
int main () {
    int n, reverse = 0;
    
    printf("Enter a number :");
    scanf("%d", &n);

    while(n != 0) {
        int rem = n % 10;
        n /= 10;
        reverse = (reverse * 10) + rem;
    }
    printf("Reverse of number is %d \n", reverse);
    return 0;
}