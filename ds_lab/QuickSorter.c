#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);
void swap(int* a, int* b);
void readArray(int n, int arr[]);


void main(){
    int size;
    printf("Enter size of the array \n");
    scanf("%d", &size);
    int arr[size];
    readArray(size, arr);
    quickSort(arr, 0, size);
    printf("Sorted array: \n");
    printArray(arr, size);
}

void readArray(int n, int arr[]){
    printf("Enter elements of the Array \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++)
        printf("%d ", arr[i]);
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j <= high- 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[high]);
        int partition = i+1;
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}
