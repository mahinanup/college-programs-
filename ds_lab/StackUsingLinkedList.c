#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* next;
};
struct Node* CreateANode(int value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->info = value;
    temp->next = NULL;
    return temp;
}
int isEmpty(struct Node* root){
    return !root;
}
void Push(struct Node** root, int value){
    struct Node* ptr = CreateANode(value);
    ptr->next = *root;
    *root = ptr;
    printf("%d pushed to stack\n", value);
}
int Pop(struct Node** root){
    if (isEmpty(*root)) {
        printf("Underflow condition met.\n");
        return 0;
    }
    struct Node* temp = *root;
    *root = (*root)->next;
    int toPop = temp->info;
    free(temp);
    return (toPop);
}
int Peek(struct Node* root){
    if (isEmpty(root)) {
        return (0);
    }
    return root->info;
}
void main() {
    struct Node *head = NULL;
    int ch;
    do {
        printf("Do you wish to Peek, Push or Pop to stack?\n");
        printf("1. Peek\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        scanf("%d", &ch);
        if (ch == 2) {
            printf("Enter a value to Push to stack.\n");
            int value;
            scanf("%d", &value);
            Push(&head, value);
        }
        if (ch == 3) {
            int value = Pop(&head);
            printf("The popped value is %d.\n", value);
        }
        if (ch == 1) {
            int value = Peek(head);
        }
        if(ch!=1&&ch!=2&&ch!=3){
            printf("Unexpected value...\n Terminating...\n");
        }
    }while(ch>=1&&ch<=3);
}