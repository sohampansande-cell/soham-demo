#include <stdio.h>
int fib() {
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibnocci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
void main() {
    fib();
}