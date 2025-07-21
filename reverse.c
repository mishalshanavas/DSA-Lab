#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("reverse order:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}