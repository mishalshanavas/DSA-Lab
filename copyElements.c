#include <stdio.h>

int main() {
    int n, i;
    printf("number of elements: ");
    scanf("%d", &n);

    int source[n], dest[n];

    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }

    for(i = 0; i < n; i++) {
        dest[i] = source[i];
    }

    printf("elements in the destination array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}