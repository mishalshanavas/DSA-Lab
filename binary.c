

#include<stdio.h>
int main(){
    int arr[100], n, i, key, low, high, mid;
    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("enter %d elements : ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter the key: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while(low <= high) {
        if(arr[mid] == key) {
            printf("found at index %d\n", mid);
            return 0;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }

    printf("Element not found broo");
    return 0;
}