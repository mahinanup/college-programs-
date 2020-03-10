#include <stdio.h>
#include <malloc.h>

typedef struct Node{
    int info;
    struct Node *next;
} node;

node *EnQueue(node *back, node* front, int value){
    node *ptr, *temp;
    if(back==NULL){
        ptr=(node*)malloc(sizeof(node));
        ptr->info=value;
        ptr->next=NULL;
        return ptr;
    }
    else{
        ptr=(node*)malloc(sizeof(node));
        ptr->info=value;
        ptr->next=NULL;
        back->next=ptr;
        return ptr;
    }
}

node* DeQueue(node *back, node* front){
    node *temp;
    if(front==NULL){
        printf("Underflow!");
    }
    else if(front==back){
        free(front);
        return NULL;
    }
    else{
        temp=front->next;
        free(front);
        return temp;
    }
}

void main(){
    int ch, val;
    node *front=NULL, *back=NULL;
    while(1){
        printf("1.Enqueue\n2.Dequeue\n");
        scanf("%d", &ch);
        if(ch == 1){
            printf("Enter Value To Enter: ");
            scanf("%d", &val);
            back= EnQueue(back, front, val);
            if(front==NULL){
                front=back;
            }
        }
        else if(ch == 2){
            front= DeQueue(back, front);
        }
        else{
            break;
        }
    }
}
