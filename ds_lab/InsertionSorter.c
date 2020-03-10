#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size);
void insertionSort(int arr[], int n);
void readArray(int n, int arr[]);


void main(){
    int size;
    printf("Enter size of the array \n");
    scanf("%d", &size);
    int arr[size];
    readArray(size, arr);
    insertionSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
}

void readArray(int n, int arr[]){
    printf("Enter elements of the Array \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++)
        printf("%d ", arr[i]);
}


void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}