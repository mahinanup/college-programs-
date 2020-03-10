#include<stdio.h>

void Merge(int arr[], int LowerBound, int Middle, int UpperBound){
    int size1=Middle-LowerBound+1;
    int size2=UpperBound-Middle;
    int Lefty[size1], Righty[size2];
    for(int i=0; i<size1; i++){
        Lefty[i]=arr[LowerBound+i];
    }
    for(int j=0; j<size2; j++){
        Righty[j]=arr[Middle+1+j];
    }
    int i=0;
    int j=0;
    int k=LowerBound;
    while(i<size1&&j<size2){
        if(Lefty[i]<=Righty[j]){
            arr[k]=Lefty[i];
            i++;
        }
        else{
            arr[k]=Righty[j];
            j++;
        }
        k++;
    }
    while(i<size1){
        arr[k]=Lefty[i];
        i++;
        k++;
    }
    while (j < size2){
        arr[k] = Righty[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int LowerBound, int UpperBound){
    if (LowerBound < UpperBound){
        int Middle = LowerBound + (UpperBound - LowerBound) / 2;
        MergeSort(arr, LowerBound, Middle);
        MergeSort(arr, Middle + 1, UpperBound);
        Merge(arr, LowerBound, Middle, UpperBound);
    }
}
void DisplayArray(int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void AcceptArray(int arr[], int size){
    printf("Enter the elements.\n");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
}
void main(){
    printf("How many elements do you wish to enter?\n");
    int size;
    scanf("%d",&size);
    int arr[size];
    AcceptArray(arr,size);
    DisplayArray(arr, size);
    MergeSort(arr, 0, size - 1);
    printf("The sorted array, in ascending order,  is \n");
    DisplayArray(arr, size);
}