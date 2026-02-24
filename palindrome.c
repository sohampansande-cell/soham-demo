#include<stdio.h>
int main() {
    int n, rev = 0, ori;

    printf("Enter a number");
    scanf("%d", &n);
    ori = n;

    while (n != 0) {
        int rem = n % 10;
        n /= 10;
        rev = (rev * 10) + rem;

    }
    if ( rev == ori) {
        printf("Palindrome number");
    } else {
        printf("Not a palindrome number");
    }

}