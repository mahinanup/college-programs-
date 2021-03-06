#include <stdio.h>
#define MAX 10

typedef struct Queue{
    int arr[MAX];
    int front, back;
} queue;

void DeQueue(queue *ptr){
    int value=0;
    if(ptr->front == -1 || ptr->front > ptr->back){
        printf("Underflow!\n");
    }
    else if(ptr->front == ptr->back){
        ptr->front=-1;
        ptr->back=-1;
    }
    else{
        ptr->front++;
    }
}
void EnQueue(int value, queue *ptr){
    if((ptr->front == 0 && ptr->back == MAX - 1) || (ptr->front == ptr->back + 1)){
        printf("Overflow!\n");
    }
    else{
        if(ptr->front == -1){
            ptr->front=0;
        }
        ptr->back++;
        ptr->arr[ptr->back]=value;
    }
}

void main(){
    int a, val;
    queue ptr;
    ptr.back=-1;
    ptr.front=-1;
    while(1){
        printf("1.Enqueue\n2.Dequeue\n");
        scanf("%d", &a);
        if(a==1){
            printf("Enter  value to store: ");
            scanf("%d", &val);
            EnQueue(val, &ptr);
        }
        else if(a==2){
            DeQueue(&ptr);
        }
        else{
            break;
        }
    }
}
