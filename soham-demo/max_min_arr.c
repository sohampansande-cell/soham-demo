#include<stdio.h>
int main () {
    int arr[] = {23, 45, 67, 89, 12};
    int max = arr[0], min = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("MAX: %d\n", max);
    printf("MIN: %d\n", min);           
    return 0;
}