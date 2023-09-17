// - deletion means deleting an element from the array

#include <stdio.h>
int deletion(int arr[], int *size, int pos);
void printArray(int arr[], int size);
void takeInput(int arr[], int size);

int main(){
 int arr[100], n, position;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    if(n<=0){
        printf("\nArray size cannot be 0 or less\n");
        return 1;
    }
    takeInput(arr, n);
    printf("\nBefore Deletion\n");
    printArray(arr, n);
    printf("Enter the position where the number is to be deleted: ");
    scanf("%d", &position);
  
  if (position < 1 || position > n) {
    printf("\nInvalid Position\nShould be between 1 and %d", n);
    return 1;
}

   int deleted= deletion(arr, &n, position);  // - pass by reference since size should also decrease in main function after deletion
    printf("\nAfter Deletion\n");
    printArray(arr, n);
    printf("\nDeleted element: %d", deleted);
    return 0;
}

int deletion(int arr[], int *size, int pos){
     int temp = arr[pos - 1];
    for (int i = pos - 1; i < *size - 1; i++) {  // - loop goes from the index value to the last element
        arr[i] = arr[i + 1];  // - left shift of elements 
    } 
    (*size)--;  // - size decreases by 1
    return temp;
}

void printArray(int arr[], int size) {
    printf("-----Traversing the Array------\n"); 
    for (int i = 0; i < size; i++) {
        printf(" %d ", arr[i]); 
    }
    printf("\n"); 
}

void takeInput(int arr[], int size) {
    printf("---Enter the array elements---\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}