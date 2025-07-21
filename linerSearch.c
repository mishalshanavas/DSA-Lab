#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("element found at index %d\n", i);
            found = 1;
            break;
        }
    }
   if(!found){
	printf("element not in array");
}
    return 0;
}
