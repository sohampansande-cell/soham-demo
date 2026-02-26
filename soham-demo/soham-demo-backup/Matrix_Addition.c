#include <stdio.h>

int main() {
    int i, j, arr1[3][3], arr2[3][3], sum[3][3];

    printf("Enter values for first matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter values for second matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Sum of 2 Matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");   // Move to next row
    }

    return 0;
}