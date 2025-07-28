#include<stdio.h>
#include<stdbool.h>
#define STACKLEN 5
#define EMPTY -1

int stack[STACKLEN];
int top = EMPTY;

bool push(int value) {
    if(top >= STACKLEN - 1) {
        printf("Stack Overflow\n");
        return false;
    }
    top++;
    stack[top] = value;
    return true;
}

int pop() {
    if(top == EMPTY) {
        printf("Stack Underflow\n");
        return EMPTY;
    }
    int value = stack[top];
    top--;
    return value;
}

int display() {
    if(top == EMPTY) {
        printf(" is empty\n");
        return 0;
    }
    printf("elements: ");
    for(int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
    return 1;
}

int main() {
    int choice, value;
    while(true) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            push(value);
        } else if(choice == 2) {
            pop();
        } else if(choice == 3) {
            display();
        } else if(choice == 4) {
            break;
        }
    }
    return 0;
}