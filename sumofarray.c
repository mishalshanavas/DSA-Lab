#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("number of elements in the array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("sum %d\n", sum);
    return 0;
}