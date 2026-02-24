#include<stdio.h>
int main () {
    int n, sum = 0, rem, ori;
    printf("Enter a number :");
    scanf("%d", &n);

    ori = n;

    while (n != 0) {
        rem = n % 10;
        sum += rem* rem* rem;
        n /=10;
    }

    if (sum == ori) {
        printf("Armstrong number");
    } else  {
        printf("Not an armstrong number");  
    }
    return 0;
    
}
