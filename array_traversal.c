#include <stdio.h>

// - traversing means visiting each element once

void traversal(int arr[], int size);
void takeInput(int arr[], int size);

int main() {
    int arr[100], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\nArray size cannot be 0 or less\n");
        return 1; //- Exit the program with an error code
    }

    takeInput(arr, n);
    traversal(arr, n);

    return 0;
}

void traversal(int arr[], int size) {
    printf("-----Traversing the Array------\n"); 
    for (int i = 0; i < size; i++) {
        printf(" %d ", arr[i]); // - prints each element of array
    }
    printf("\n"); 
}

void takeInput(int arr[], int size) {
    printf("---Enter the array elements---\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
