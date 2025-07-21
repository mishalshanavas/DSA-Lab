#include<stdio.h>
int main(){
    int n, i, j, count = 0;
    printf("number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("elements: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break; 
            }
        }
    }
    
    printf("duplicate = %d\n", count);
    return 0;
}