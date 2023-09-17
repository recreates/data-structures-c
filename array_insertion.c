// - insertion means inserting elements in an array

#include <stdio.h>

void insertion(int arr[], int *size, int position, int value);
void printArray(int arr[], int size);
void takeInput(int arr[], int size);

int main(){
    int arr[100], n, num, position;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    if(n<=0){
        printf("\nArray size cannot be 0 or less\n");
        return 1;
    }
    takeInput(arr, n);
    printf("\nBefore Insertion\n");
    printArray(arr, n);
    printf("Enter the position where the number is to be inserted: ");
    scanf("%d", &position);
    if(position<0 || position>n){  // - checking the position boundaries
        printf("\nInvalid Position\nShould be between 0 and %d",n);
        return 1;
    }
    printf("Enter the number you want to insert: ");
    scanf("%d", &num);

    insertion(arr, &n, position, num);  // - pass by reference since size should also increase in main function after insertion
    printf("\nAfter insertion\n");
    printArray(arr, n);
    return 0;
}
void insertion(int arr[], int *size, int position, int value){  // - using a pointer for the actual size 
    int i;
    for (i = *size - 1; i >= position - 1;i--){  // - since position is one greater than the actual index
    //- loop starts from last and stops at the index where element is to be inserted

         arr[i + 1] = arr[i];  //- right shift of elements
    }
    arr[position - 1] = value;
    (*size)++; //- the size increases after insertion
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